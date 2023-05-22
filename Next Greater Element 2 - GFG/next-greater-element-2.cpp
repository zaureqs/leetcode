//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int n, vector<int>& nums) {
        // code here
        stack<int> st;
        int temp;


        for(int i = n - 1; i >= 0; i--)
        {
            st.push(nums[i]);
        }

        for(int i = n - 1; i >= 0; i--)
        {
            while(!st.empty() && st.top() <= nums[i])
            {
                st.pop();
            }
            if(st.size() == 0)
            {   
                st.push(nums[i]);
                nums[i] = -1;
            }
            else
            {
                temp = nums[i];
                nums[i] = st.top();
                st.push(temp);
            }
            
        }
        return nums;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends