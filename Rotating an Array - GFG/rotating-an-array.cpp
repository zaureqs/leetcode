//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int k) {
        // code here
        { 
	   // Your code goes here
	   k = k%n;
	   int a[k];
	   
	   for(int i = 0 ;i<k;i++)
	       a[i]=arr[i];
	   
	   for(int i = 0;i<n-k;i++)
	       arr[i]=arr[i+k];
	   
	   for(int i = n-k,j=0;i<n;i++,j++)
	       arr[i]=a[j];
	} 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends