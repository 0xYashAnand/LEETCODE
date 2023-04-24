class Solution {
public:
    int lastStoneWeight(vector<int>& st) {
        int res , n=st.size();
        priority_queue<int> pq;
        for(int i=0; i<n; i++){
            pq.push(st[i]);
        }
        while (!pq.empty() && pq.size()>1) {
            int a  = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if(a!=b) pq.push(a-b);
            if(a==b) pq.push(0);
            if(pq.size()==1) break;
        }
        res = pq.top();
        return res;
    }
};