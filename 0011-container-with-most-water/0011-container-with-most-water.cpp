class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1, area=0;
        while(i<j){
            int h = min(height[i], height[j]);
            area = max(area, (j-i)*h);
            while(i<j && h>=height[i]) i++;
            while(i<j && h>=height[j]) j--;
        }
        return area;
    }
};