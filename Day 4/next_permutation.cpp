class Solution {

 
 
public:
    void nextPermutation(vector<int>& nums) {
     int i = nums.size() - 2;
      while(i>=0){
        if(nums[i]<nums[i+1]){
       
          break;
        }
       i--;
      }
      if(i < 0){
        sort(nums.begin(),nums.end());
        return;
      }
      int j= nums.size() - 1;
      while(j>=0){
        if(nums[i]<nums[j]){
          int temp = nums[i];
          nums[i]= nums[j];
          nums[j] = temp;
          break;
        }
        j--;
      }
      sort(nums.begin() +i+1,nums.end());
    }
};
