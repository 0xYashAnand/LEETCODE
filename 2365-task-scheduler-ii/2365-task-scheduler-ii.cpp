class Solution {
public:
    long long taskSchedulerII(vector<int>& t, int s) {
        long long days=0;
        int p=1;
        map<long long, long long>mp;
        
        for(long long i=0; i<t.size(); i++){
            days++;
            
            if(mp.find(t[i]) == mp.end())
                mp[t[i]] = days;
            else
            {
                if(mp[t[i]] + s + 1 > days)
                    days = mp[t[i]] + s + 1;
                
                mp[t[i]] = days;
            }
            
           
        }
        return days;
    }
};