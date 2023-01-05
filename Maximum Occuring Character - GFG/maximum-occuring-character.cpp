//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char,int> mp;
       for(auto &it : str)
       {
           mp[it]++;
       }
       int maxi = -1;
       for(auto &it : mp)
       {
           maxi = max(maxi,it.second);
       }
       for(auto &it : mp)
       {
           if(maxi == it.second)
           {
               return it.first;
           }
       }
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends