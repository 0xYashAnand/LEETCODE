class Solution {
public:
    string reverseVowels(string s) {
        string v;
        for(int i=0; i<s.size(); i++)
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U') v += s[i];
        
        int st = 0 , e = v.size()-1 , j=0;
        while(st<e){
            swap(v[st++] , v[e--]);
        }
        
        for(int i=0; i<s.size(); i++)
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ){
               s[i] = v[j];
                j++;
            }
        
        v.clear();
        return s;
    }
};