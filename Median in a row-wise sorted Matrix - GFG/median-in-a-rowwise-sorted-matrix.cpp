//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:

    int smaller(vector<int> &arr,int mid)
    {
        int l = 0;
        int h = arr.size()-1;
        while(l <= h)
        {
            int midd = (l + h)/2;
            if(arr[midd] <= mid) 
            {
                l = midd + 1;
            }
            else
            {
                h = midd - 1;
            }
        }
        return l;
    }
    int median(vector<vector<int>> &matrix, int n, int m)
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini = min(mini,matrix[i][0]);
            maxi = max(maxi , matrix[i][m-1]);
        }
        int l = mini;
        int h = maxi;
        
        while(l <= h)
        {
            int mid = l + (h - l)/2;
            int cnt = 0;
            for(int i=0;i<n;i++)
            {
                cnt += smaller(matrix[i],mid);
            }
            if(cnt <= (m*n)/2)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        return l;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends