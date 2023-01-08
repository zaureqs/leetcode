//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int mostBalloons(int n, pair<int, int> arr[]) 
    {
        int count = 0;
        int overlapPoints = 0;
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            int x1 = arr[i].first;
            int y1 = arr[i].second;
            unordered_map<double,int> mp;
            count = overlapPoints =0;
            for(int j=i;j<n;j++)
            {
                int x2 = arr[j].first;
                int y2 = arr[j].second;
                double rise = (y2 - y1);
                double sun = (x2 - x1);
                if (arr[i] == arr[j])
                {
                    overlapPoints++;
                    continue;
                }
                if(sun == 0)
                {
                    mp[INT_MAX]++;
                    count = max(count, mp[INT_MAX]);
                    continue;
                }
                double slope = (rise / sun);
                mp[slope]++;
                count = max(count,mp[slope]);
            }
            ans = max(ans, count + overlapPoints);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        pair<int, int> arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i].first;
        }
        for (int i = 0; i < N; i++) {
            cin >> arr[i].second;
        }
        Solution ob;
        cout << ob.mostBalloons(N, arr) << endl;
    }
}
// } Driver Code Ends