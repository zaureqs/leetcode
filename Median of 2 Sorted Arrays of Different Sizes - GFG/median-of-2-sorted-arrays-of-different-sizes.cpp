//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void sortTheArray(vector<int> &arr1,vector<int> &arr2,int n,int m)
    {
        int gap =  ceil((float)(n + m) / 2);;
        
        while(gap > 0)
        {
            int i = 0;
            int j = gap;
            
            while(j < (n+m))
            {
                if(j < n && arr1[i] > arr1[j])
                {
                    swap(arr1[i],arr1[j]);
                }
                else if(j >= n && i < n && arr1[i] > arr2[j - n])
                {
                    swap(arr1[i],arr2[j - n]);
                }
                else if(j >= n && i >= n && arr2[i - n] > arr2[j - n])
                {
                    swap(arr2[i - n],arr2[j - n]);
                }
                i++;
                j++;
            }
            
            if(gap == 1) gap = 0;
            gap = ceil((float)gap/2);
        }
    }
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int n = array1.size();
        int m = array2.size();
        sortTheArray(array1,array2,n,m);
        
        if((n+m) %2 == 1)
        {
            int mid = (n + m)/2;
            if(mid < n)
            {
                return (double)array1[mid];
            }
            else 
            {
                return (double)array2[mid - n];
            }
        }
        else
        {
            int mid = (n + m)/2 - 1;
            int mid2 = mid + 1;
            if(mid2 < n)
            {
                return (double)(array1[mid] + array1[mid2])/2;
            }
            else if(mid2 >= n && mid < n)
            {
                return (double)(array1[mid] + array2[mid2 - n])/2;
            }
            else if(mid >= n)
            {
                return (double)(array2[mid - n] + array2[mid2 - n])/2;
            }
        }
        return 1.0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends