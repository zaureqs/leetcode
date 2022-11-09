class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& interval){
        int n = interval.size();
        int ans = 0;

        if (n <= 1)
            return 0;

        sort(interval.begin(), interval.end());

        int end = interval[0][1];
        for (int i = 1; i < n; i++) {


            if (interval[i][0] < end){
                cout << interval[i][0]<<"  ";
                ans++;

                end = min(interval[i][1], end);
            }
            else
                end = interval[i][1];
        }

        return ans;
    }
};