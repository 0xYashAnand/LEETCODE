class Solution {
public:
    string predictPartyVictory(string s) {
        int n = s.size();
        queue<int> qd,qr;
        for(int i=0; i<n; i++)
            (s[i]=='R')?qr.push(i):qd.push(i);
        
        while(qd.size()!=0 && qr.size()!=0){
            int a = qd.front() , b= qr.front();
            qd.pop()  , qr.pop();
            (a<b) ? qd.push(a+n) : qr.push(b+n);
        }
       return (qd.size()<qr.size() )?  "Radiant" : "Dire";
    }
};




