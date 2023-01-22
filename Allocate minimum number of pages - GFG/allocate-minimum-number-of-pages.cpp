//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool check(int arr[], int n, int m,int mid)
    {
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(sum > mid)
            {
                m--;
                sum = arr[i];
            }
        }
        if(m <= 0) return false;
        return true;
        
    }
    int findPages(int arr[], int n, int m) 
    {
        if(m > n)
        {
            return -1;
        }
        int maxsum = 0;
        for(int i=0;i<n;i++) maxsum += arr[i];
        
        int left = *max_element(arr , arr + n);
        int right = maxsum;
        
        int ans = -1;
        while(left <= right)
        {
            int mid = (left + right)/2;
            if(check(arr,n,m,mid))
            {
                ans = mid;    
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends