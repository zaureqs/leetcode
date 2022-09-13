class Solution {
    public int[] decompressRLElist(int[] nums) {
        
        int n = 0;
        for(int i = 0; i < nums.length; i = i + 2){
            n += nums[i];
        }
        
        int[] arr = new int[n];
        int freq=0,val=0,k=0;
        
        for(int i = 0;i<nums.length;i+=2){
            freq = nums[i];
            val = nums[i+1];
            while(freq-->0){
                arr[k] = val;
                k++;
            }
        }
        
        return arr;
    }
}