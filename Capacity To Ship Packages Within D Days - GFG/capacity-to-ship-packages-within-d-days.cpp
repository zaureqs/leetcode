//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool check(int mid, int arr[], int days, int n)
    {
        int sum = 0;
        int count = 1;
        
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(sum > mid)
            {
                count++;
                sum = arr[i];
            }
        }
        if(count <= days) return true;
        return false;
    }
    int leastWeightCapacity(int arr[], int n, int d) 
    {
        int left = *max_element(arr, arr+n);
        int right = accumulate(arr,arr + n,0);
        while(left < right)
        {
            int mid = (left + right)/2;
            
            if(check(mid,arr,d,n))
            {
                right = mid;
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
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends