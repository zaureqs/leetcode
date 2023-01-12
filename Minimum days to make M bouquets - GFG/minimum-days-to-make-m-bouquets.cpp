//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool check(int present_day, vector<int> &bloomDay,int require_buk,int require_flavar)
    {
        int flower_count = 0;
        int buk_count = 0;

        for(auto &it : bloomDay)
        {
            if(it <= present_day)
            {
                flower_count++;
                if(flower_count == require_flavar)
                {
                    buk_count++;
                    flower_count =  0;
                }
            }
            else 
            {
                flower_count = 0;
            }
        }
        if(buk_count >= require_buk) return true;
        else return false;
    }
    int solve(int m, int k, vector<int> &bloomDay){
      if((long)bloomDay.size()<(long)m*(long)k) 
            return -1;
            
        int left = *min_element(bloomDay.begin(),bloomDay.end());
        int right = *max_element(bloomDay.begin(),bloomDay.end());

        while(left < right)
        {
            int mid = (right + left)/2;

            if(check(mid,bloomDay,m,k))
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends