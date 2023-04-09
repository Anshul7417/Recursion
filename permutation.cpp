//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
// 	Anyone wondering why there code is not working now is because GFG added a new test case ABB so your backtracking code will give duplicate values , use set then copy set to vector and return the vector.
	    void solve(string S,set<string> &ans,int index){
	        if(index>=S.length()){
	            ans.insert(S);
	            return;
	        }
	        
	        for(int j=index;j<S.length();j++){
	            swap(S[index],S[j]);
	            solve(S,ans,index+1);
	            swap(S[index],S[j]);  //backtrack
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    int index=0;
		    set<string> ans;
		    vector<string> result;
		    solve(S,ans,index);
		    result.assign(ans.begin(),ans.end());
		    sort(result.begin(),result.end());
		    return result;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends