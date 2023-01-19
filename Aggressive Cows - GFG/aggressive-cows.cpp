//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool check(vector<int> &stalls,int k,int mid)
    {
        int last = stalls[0];
        k--;
        for(int i = 1;i<stalls.size();i++)
        {
            if(last+mid<= stalls[i])
            {
                last = stalls[i];
                k--;
            }
            if(!k)
                return true;
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls)
    {
        sort(stalls.begin(), stalls.end());
        
        int left = 0;
        int right = 1000000000;
        int mid;
        int ans;
        
        while(left<right)
        {
            mid = (left+right)/2;
            
            if(check(stalls,k,mid))
            {
                ans = mid;
                left = mid+1;
            }
            else
            {
                right = mid;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends