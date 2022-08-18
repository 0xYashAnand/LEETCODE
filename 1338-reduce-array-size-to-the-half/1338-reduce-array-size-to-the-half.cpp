class Solution {
public:
    int minSetSize(vector<int>& a) {
        
        map<int,int> mp;
        for(int i=0; i<a.size(); i++)
            mp[a[i]]++;
        
        priority_queue<int> pq;
        
        for(auto p : mp)
            pq.push(p.second);
        int res=0, cnt=0;
        while(cnt<a.size()/2){
            cnt+=pq.top();
            pq.pop();
            res++;
        }
        return res;
    }
};
      
       