//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &arr, int n, int m, int x)
    {
        int i=0;
        int j = m - 1;
        
        if(n == 0)
        {
            return 0;
        }
        
        while(i < n && j >= 0)
        {
            if(arr[i][j] == x)
            {
                return 1;
            }
            else if(arr[i][j] < x)
            {
                i++;
            }
            else 
            {
                j--;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends