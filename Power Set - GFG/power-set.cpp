//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		void generateString(int i,string &temp,vector<string> &ans,string s)
        {
            if(i >= s.size())
            {
                if(temp.size() != 0)
                    ans.push_back(temp);
                return;
            }
            temp += s[i];
            generateString(i+1,temp,ans,s);
            temp.pop_back();
            generateString(i+1,temp,ans,s);
        }
        vector<string> AllPossibleStrings(string s)
        {
            vector<string> ans;
            string temp = "";
            generateString(0,temp,ans,s);
            sort(ans.begin(),ans.end());
            return ans;
        }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends