//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    void Merge(long long *arr, long long lb, long long ub, long long mid,long long &inv_count)
    {
        long long i,j,k,b[ub-lb+1];
        i = lb;
        j = mid+1;
        k = 0;
        while(i <= mid && j <= ub)
        {
            if(arr[i] <= arr[j])
            {
                b[k++] = arr[i++];
            }
            else
            {
                b[k++] = arr[j++];
                inv_count = inv_count + (mid - i + 1);
            }
        }
        while(i <= mid)
        {
            b[k++] = arr[i++];
        }
        while(j <= ub)
        {
            b[k++] = arr[j++];
        }
        
        for(i=lb;i<=ub;i++)
        {
            arr[i] = b[i-lb];
        }
    }
    void merge_sort(long long *arr,long long lb,long long ub,long long &inv_count)
    {
        long long mid;
        if(lb < ub)
        {
            mid =(lb+ub)/2;
            merge_sort(arr,lb,mid,inv_count);
            merge_sort(arr,mid+1,ub,inv_count);
            Merge(arr, lb, ub,mid,inv_count);
        }
    }
    long long int inversionCount(long long arr[], long long n)
    {
        long long inv_count = 0;
        merge_sort(arr,0,n-1,inv_count);
        return inv_count;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends