class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int mid = 0;
        int r = n-1;
        
        while(mid<=r){
            
            if(nums[mid] ==0)
                swap(nums[mid++] , nums[l++]);
            
            else if(nums[mid]==2)
                swap(nums[mid] , nums[r--]);
            
            else
                mid++;
        }
    }
};