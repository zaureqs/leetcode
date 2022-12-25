//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int n, vector<int>& arr, int target) {
        // Code here
        int l = 0;
        int h = n - 1;
        while(l <= h)
        {
            int mid = (l+h)/2;
            if(arr[mid] == target)
            {
                return true;
            }
            if(arr[l] == arr[mid] && arr[mid] == arr[h])
            {
                l++;
                h--;
            }
            else if(arr[l] <= arr[mid])
            {
                if(target <= arr[mid] && target >= arr[l])
                {
                    h = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            else
            {
                if(target <= arr[h] && target >= arr[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1; 
                }
            }
            // cout << l << " " << h << endl;
        }
        // if(arr[1] == target) return true;
        return false;
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
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends