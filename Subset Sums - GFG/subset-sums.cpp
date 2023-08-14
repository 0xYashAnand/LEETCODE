//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void function(int ind, vector<int>num, vector<int>&res,int sum){
	if(num.size()<=ind){
		res.push_back(sum);
		return;
	}
    
	sum+=num[ind];
	function(ind+1, num, res, sum);

	sum-=num[ind];
	function(ind+1, num, res, sum);
}

vector<int> subsetSums(vector<int> &num,int N ){
	// Write your code here.	
	vector<int> res;
	function(0, num, res, 0);
	sort(res.begin(), res.end());
	return res;
}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends