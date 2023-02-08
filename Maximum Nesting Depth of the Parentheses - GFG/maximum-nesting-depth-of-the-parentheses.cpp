//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxDepth(string s) 
    {
        if(s.size() < 2)
        {
            return 0;
        }
       stack<char> st;
       int maxcount = 0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                st.push('(');
            }
            else if(s[i] == ')')
            {
                int size = st.size();
                maxcount = max(maxcount,size);
                st.pop();
            }
        }
        return maxcount;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends