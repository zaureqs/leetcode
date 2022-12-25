//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int nums[], int n){
        
        int l = 0;
        int r = n-1;
        int mid;

        if(n==1) return nums[l];
        else if(nums[l] < nums[l+1] && nums[l]<nums[r]) return nums[l];
        else if(nums[r]< nums[r-1] && nums[r] <nums[l]) return nums[r];
        l++;
        r--;
        while(l<=r) {
            mid = (l+r)/2;
            
            if(nums[mid-1] > nums[mid] && nums[mid] <= nums[mid+1])
            {
                return nums[mid];
            }
            else if(nums[l] < nums[l+1] && nums[l]<nums[l-1]) return nums[l];
            else if(nums[r]< nums[r-1] && nums[r] <nums[r+1]) return nums[r];
            else if(nums[l] == nums[r] && nums[mid] == nums[l]){
                l++;
                r--;
            }
            else if(nums[l]<nums[mid])
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
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends