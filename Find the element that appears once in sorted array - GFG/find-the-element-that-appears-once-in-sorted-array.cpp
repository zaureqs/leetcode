//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int nums[], int n)
    {
        int l = 0;
        int r = n-1;
        
        if(r == 0 ) return nums[0];
        else if(nums[0] != nums[1]) return nums[0];
        else if(nums[r] != nums[r-1]) return nums[r];

        while (l <= r){
            int mid = l+(r-l)/2;
            if((nums[mid] != nums[mid+1]) && (nums[mid] != nums[mid-1]))
            {
                return nums[mid];
            }
            else if((nums[mid] == nums[mid+1] && mid%2 == 0) || ((nums[mid] == nums[mid -1]) && mid%2 ==1))
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        return nums[l];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends