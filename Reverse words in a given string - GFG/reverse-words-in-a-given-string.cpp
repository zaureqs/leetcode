//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        string ans = "";
        string temp = "";
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] != '.')
            {
                temp += s[i];
            }
            else if(temp.size() != 0)
            {
                reverse(temp.begin(),temp.end());
                ans += temp;
                ans += ".";
                temp = "";
            }
        }
        if(temp.size() != 0)
        {
            reverse(temp.begin(),temp.end());
            ans += temp;
        }
        if(ans[ans.size() - 1] == '.')
        {
            ans.pop_back();
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends