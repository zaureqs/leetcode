class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        nums.push_back(INT_MIN);
        nums.insert(nums.begin(),INT_MIN);
        
        int l = 1,h = nums.size()-2;
        
        while(l<=h){
            int mid = l+(h-l)/2;
            
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid-1;
            
            else if(nums[mid+1]>nums[mid])
                l = mid+1;
            
            else
                h = mid-1;
        }
        
        return 0;
    }
};