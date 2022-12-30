//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	vector<string> ans;
    
    for(int i=1;i<=N;i++)
    {
        int k = i;
        string temp = "";
       // cout << temp << endl;
        while(k)
        {
            int rem = k%2;
            temp += to_string(rem);
            k /= 2;
        }
        reverse(temp.begin(),temp.end());
        ans.push_back(temp);
    }
    return ans;
}


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends