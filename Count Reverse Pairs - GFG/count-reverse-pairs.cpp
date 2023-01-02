//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void Merge(vector<int> &nums, int lb, int ub, int mid,int &inv_count)
    {
        int i,j,k,b[ub-lb+1];
        i = lb;
        j = mid+1;
        k = 0;
        int ii = i;
        int jj = j;
        while(ii<=mid)
        {
            while(jj<=ub && nums[ii] > 2* (long)nums[jj])
            {
                jj++;
            }
            ii++;
            inv_count+=(jj-(mid+1));
        }
        while(i <= mid && j <= ub)
        {
            if(nums[i] <= nums[j])
            {
                b[k++] = nums[i++];
            }
            else
            {
                b[k++] = nums[j++];
            }
        }
        while(i <= mid)
        {
            b[k++] = nums[i++];
        }
        while(j <= ub)
        {
            b[k++] = nums[j++];
        }
        for(i=lb;i<=ub;i++)
        {
            nums[i] = b[i-lb];
        }
    }
    void merge_sort(vector<int> &nums,int lb,int ub,int &inv_count)
    {
        int mid;
        if(lb < ub)
        {
            mid =(lb+ub)/2;
            merge_sort(nums,lb,mid,inv_count);
            merge_sort(nums,mid+1,ub,inv_count);
            Merge(nums, lb, ub,mid,inv_count);
        }
    }
    int countRevPairs(int n, vector<int> nums) {
        int inv_count = 0;
        merge_sort(nums,0,n-1,inv_count);
        return inv_count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends