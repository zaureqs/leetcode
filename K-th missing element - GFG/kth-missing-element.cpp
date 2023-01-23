//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int arr[], int n, int k)
{
    if(arr[n - 1] - arr[0] - n + 1< k) return -1;
    int i = arr[0];
    int j = 0;
    while(k)
    {
        if(i == arr[j])
        {
            if(j < n-1) j++;
        }
        else {
            k--;
        }
        i++;
    }   
    return i-1;
}