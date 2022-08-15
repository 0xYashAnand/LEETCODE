class Solution {
public:
    int romanToInt(string s) {
        int k=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='I' && s[i+1]=='V') {
                k+=4;
                i++;
            }
            else if(s[i]=='I' && s[i+1]=='X') {
                k+=9;
                i++;
            }
            else if(s[i]=='X' && s[i+1]=='L') {
                k+=40;
                i++;
            }
            else if(s[i]=='X' && s[i+1]=='C') {
                k+=90;
                i++;
            }
            else if(s[i]=='C' && s[i+1]=='D') {
                k+=400;
                i++;
            }
            else if(s[i]=='C' && s[i+1]=='M') {
                k+=900;
                i++;
            }
            else if(s[i]=='I') k+=1;
            else if(s[i]=='V') k+=5;
            else if(s[i]=='X') k+=10;
            else if(s[i]=='L') k+=50;
            else if(s[i]=='C') k+=100;
            else if(s[i]=='D') k+=500;
            else if(s[i]=='M') k+=1000;
        }
        return k;
    }
};