//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool divisor(int divide , vector<int> &nums, int max_divisor)
    {
        long long sum = 0;
        for(auto &it : nums)
        {
            sum = sum + ceil(1.0*it/divide);
        }
        if(sum > max_divisor) return true;
        else return false;
    }
    int smallestDivisor(vector<int>& nums, int k) {

        int left = 1;
        int right = *max_element(nums.begin(),nums.end());

        while(left < right)
        {
            int mid = (left + right)/2;
            if(divisor(mid, nums,k))
            {
                left = mid+1;
            }
            else
            {
                right = mid;
            }
        }
        return left;
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
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends