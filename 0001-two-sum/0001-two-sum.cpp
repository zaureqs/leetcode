class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(target-nums[i]))
            {
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                return ans;
            }
            mp.insert({nums[i],i});
        }
        return ans;
    }
};