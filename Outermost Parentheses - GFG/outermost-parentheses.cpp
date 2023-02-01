//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        int count = 0;
        std::string ans;
        for (int i = 0 ;i<s.length();i++){
            if (s[i] == '(') {
                if (count>0)
                    ans += '(';

                count++;
            }
            
            else {
                
                count--;
                
                if (count>0)
                    ans += ')';
                
            }
        }
        
        return ans;
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

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends