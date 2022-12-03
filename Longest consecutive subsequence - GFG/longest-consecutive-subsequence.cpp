//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        unordered_set<int> s;
        int count = 0;
        int max_count = 0;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
        
        for(int i = 0;i<n;i++)
        {
           if(!s.count(arr[i]-1)){
               count = 1;
               int temp = arr[i];
               while(s.count(temp+1)){
                   count++;
                   temp++;
               }
           }
            max_count = max(count,max_count);
        }
        return max_count;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends