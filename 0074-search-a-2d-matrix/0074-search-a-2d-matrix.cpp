class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int x) {
        int n = arr.size();
        int m = arr[0].size();
        int i=0;
        int j = m - 1;
        
        if(n == 0)
        {
            return 0;
        }
        
        while(i < n && j >= 0)
        {
            if(arr[i][j] == x)
            {
                return 1;
            }
            else if(arr[i][j] < x)
            {
                i++;
            }
            else 
            {
                j--;
            }
        }
        return 0;
    }
};