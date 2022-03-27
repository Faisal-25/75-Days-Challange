class Solution {
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer,Integer> hm = new HashMap<>();
        int sum = 0;
      hm.put(sum,1);
      int count = 0;
      for(int val:nums){
        sum+=val;
        if(hm.containsKey(sum-k)){
          count+=hm.get(sum-k);
        }
        hm.put(sum,hm.getOrDefault(sum,0)+1);
      }
      return count;
    }
}
