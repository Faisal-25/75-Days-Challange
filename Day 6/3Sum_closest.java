class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
      int n= nums.length;
      int minDiff = Integer.MAX_VALUE;
      int ans = 0;
       for(int i = 0;i<n;i++){
         int j = i+1;
         int k = n-1;
         int tar = target-nums[i];
         while(j<k){
           int sum = nums[j]+nums[k];
           if(sum >= tar){
             if(Math.abs(target-(sum+nums[i]))<minDiff){
               minDiff = Math.abs(target-(sum+nums[i]));
               ans = sum+nums[i];
             }
             k--;
           }
           else if(sum<=tar){
             if(Math.abs(target-(sum+nums[i]))<minDiff){
               minDiff = Math.abs(target-(sum+nums[i]));
               ans = sum+nums[i];
             }
             j++;
           }
         }
       }
      return ans;
    }
}
