//template to use unordered_set of vectors
struct hashFunction 
{
  size_t operator()(const vector<int> 
                    &myVector) const 
  {
    std::hash<int> hasher;
    size_t answer = 0;
      
    for (int i : myVector) 
    {
      answer ^= hasher(i) + 0x9e3779b9 + 
                (answer << 6) + (answer >> 2);
    }
    return answer;
  }
};
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
       unordered_set<vector<int>,hashFunction> st;
        for(int i = 0;i<nums.size();i++){
          for(int j = i+1;j<nums.size();j++){
            int l = j+1;
            int r = nums.size() - 1;
            int tar = target-(nums[i]+nums[j]);
            while(l<r){
              int sum = nums[l]+nums[r];
              if(sum>tar){
                r--;
              }
              else if(sum<tar){
                l++;
              }
              else{
                vector<int> temp{nums[i],nums[j],nums[l],nums[r]};
                st.insert(temp);
                l++;
                r--;
               
             
              }
            }
          }
        }
      vector<vector<int>> ans;
      for(vector<int> v:st){
        ans.push_back(v);
      }
      return ans;
    }
};
