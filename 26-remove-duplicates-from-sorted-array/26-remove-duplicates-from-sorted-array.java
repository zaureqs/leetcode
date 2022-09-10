class Solution {
    public int removeDuplicates(int[] nums) {
        int l = 1,r = 0;
        for(;r<nums.length-1;r++){
            if(nums[r] != nums[r+1]){
                nums[l] = nums[r+1];
                l++;
            }
        }
        return  l;
    }
}