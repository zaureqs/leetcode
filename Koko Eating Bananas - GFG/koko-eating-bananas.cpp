//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int return_max(vector<int> piles)
    {
        int maxi = -1;
        for(auto &it : piles) if(maxi < it) maxi = it;
        return maxi;
    }
    int Solve(int n, vector<int>& piles, int h) {
        int maxi = return_max(piles);
        int left = 1;
        int right = maxi;  
        long int cnt = 0;
        while(left <= right)
        {
            int mid = (left + right)/2;
            cnt = 0;
            for(auto &it : piles)
            {
                int div = (it/mid);
                cnt += div;
                if(it%mid != 0)
                {
                    cnt++;
                }
            }
            if(cnt <= h)
            {
                right = mid - 1;
            }
            else 
            {
                left = mid + 1;
            }
        }
        return left;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends