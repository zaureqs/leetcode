class Solution {
    public int removeDuplicates(int[] nums) {
        int l = 1;
        for(int r=0;r<nums.length-1;r++){
            if(nums[r] != nums[r+1]){
                nums[l] = nums[r+1];
                l++;
            }
        }
        for(int i =0;i<nums.length;i++)
           System.out.println(nums[i]);
        return  l;
    }
}