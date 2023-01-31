//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        string ans = "";
        int min_len = INT_MAX;
        for(int i=0;i<n;i++)
        {
            int len = arr[i].size();
            min_len = min(min_len,len);
        }
        for(int i=0;i<min_len;i++)
        {
            int j;
            for(j=1;j<n;j++)
            {
                if(arr[j-1][i] != arr[j][i])
                {
                    break;
                }
            }
            
            if(j == n)
            {
                ans += arr[0][i];
            }
            else
            {
                break;
            }
        }
        return ans.size() ? ans : "-1";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends