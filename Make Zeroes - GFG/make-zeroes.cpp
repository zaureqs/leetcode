//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> copy(matrix.begin(),matrix.end());
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(copy[i][j] == 0)
                {
                    if(i>0){
                        matrix[i][j] += copy[i-1][j];
                        matrix[i-1][j] = 0;
                    }
                    if(i<n-1){
                        matrix[i][j] += copy[i+1][j];
                        matrix[i+1][j] = 0;
                    }
                    if(j>0){
                        matrix[i][j] += copy[i][j-1];
                        matrix[i][j-1] = 0;
                    }
                    if(j<m-1){
                        matrix[i][j] += copy[i][j+1];
                        matrix[i][j+1] = 0;
                    }
                }
            }
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends