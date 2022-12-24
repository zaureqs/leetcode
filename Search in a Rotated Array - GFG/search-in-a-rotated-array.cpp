//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int arr[], int l, int h, int target){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        while(l <= h)
        {
            int mid = (l+h)/2;
            if(arr[mid] == target)
            {
                return mid;
            }
            else if(arr[l] <= arr[mid])
            {
                if(target < arr[mid] && target >= arr[l])
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
                if(target <= arr[h] && target > arr[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1; 
                }
            }
        }
        return -1; 
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends