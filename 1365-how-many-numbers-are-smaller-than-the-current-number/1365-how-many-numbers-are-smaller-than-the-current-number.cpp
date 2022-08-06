class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> temp;
        vector<int> ans;
        for(int& num : nums) {
            temp.push_back(num);
        }
        sort(temp.begin(), temp.end());
        
        for(int& val : nums) {
            int lb = lower_bound(temp.begin(), temp.end(), val)-temp.begin();
            ans.push_back(lb);
        }
        
        return ans;
    }
};