//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s, string t)
    {
        if(s.size() != t.size()) return false;
        
        map<char,int> ss;
        map<char,int> tt;
        for(int i=0;i<s.size();i++)
        {
            if(ss[s[i]] != tt[t[i]])
            {
                return false;
            }
            ss[s[i]] = i + 1;
            tt[t[i]] = i + 1;
        } 
        return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends