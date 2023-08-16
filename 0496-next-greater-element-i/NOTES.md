```
class Solution {
public:
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
vector<int> res(nums1.size(),-1);
map<int,int> mp;
stack<int> st;
for(int i=nums2.size()-1; i >= 0; i--){
while(!st.empty() && st.top()<=nums2[i]){
st.pop();
}
if(!st.empty()){
mp[nums2[i]] = st.top();
}
else mp[nums2[i]]=-1;
st.push(nums2[i]);
}
for(auto i:mp) cout<<i.first<<" "<<i.second<<endl;
for(int i=0; i<nums1.size(); i++){
res[i] = mp[nums1[i]];
}
return res;
}
};
```