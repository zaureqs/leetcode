//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
unordered_map<char,int> roman_map = {{'I',1},{'V',5},{'X', 10},{'L',50},{'C',100},{'D',500},{'M',1000}};
class Solution {
  public:
    int romanToDecimal(string &s)
    {
        int ans = roman_map[s[s.size()-1]];

        for(int i=s.size()-2;i>=0;i--)
        {
            if(roman_map[s[i+1]] > roman_map[s[i]])
            {
                ans -= roman_map[s[i]];
            }
            else
            {
                ans += roman_map[s[i]];
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
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends