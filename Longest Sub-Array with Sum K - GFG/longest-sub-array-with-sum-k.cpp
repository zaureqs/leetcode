//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        unordered_map<int, int> pevsum;
        int sum = 0;
        int ans = 0;
        pevsum[0] = -1;
        
        for(int i = 0;i<n;i++){
            
            sum+=a[i];
            
            if(pevsum.find(sum-k) != pevsum.end()){
                ans = max(ans, i-pevsum[sum-k]);
            }
            if(pevsum.find(sum) == pevsum.end()){
                pevsum[sum] = i;
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends