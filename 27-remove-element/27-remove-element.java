class Solution {
    public int removeElement(int[] nums, int val) {
        int l = 0, r = nums.length-1;
        while(l<=r){
            if(nums[r]==val){
                r--;
                continue;
            }
            if(nums[l]==val){
                nums[l]=nums[r];
                    r--;
            }
            l++;
        }
        return l;
    }
}