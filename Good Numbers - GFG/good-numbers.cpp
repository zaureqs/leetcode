//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool check(int n, int D,int sum)
    {
        if(n == 0)
        {
            return true;
        }
        if((n%10 == D) || (n%10) <= sum)
        {
            return false;
        }
        return check(n/10,D,sum + (n%10));
    }
    vector<int> goodNumbers(int L, int R, int D) 
    {
        vector<int> ans;
        
        for(int i = L;i <= R;i++)
        {
            int digit = i%10;
            int sum = digit;
            if(digit == D) 
            {
                continue;
            }
            if(check(i/10,D,sum))
            {
                ans.push_back(i);
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
        int L, R, D;
        cin >> L >> R >> D;
        Solution ob;
        vector<int> ans = ob.goodNumbers(L, R, D);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends