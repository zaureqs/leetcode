//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int check(string &s, int i, long long &ans, int &sign)
    {
        if(i < s.size() && s[i] >= '0' && s[i] <= '9')
        {
            int x = s[i]-'0';
            ans = ans*10+x;
        }
        else if(i < s.size())
        {
            return -1;
        }
        else
        {
            return sign*ans;
        }
        return check(s,i+1,ans,sign);
    }
    int atoi(string s) 
    {
        long long ans = 0;
        int sign = 1;
        int i = 0;
        if(s[i] == '-')
        {
            sign = -1;
            i++;
        }
        return check(s,i,ans,sign);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends