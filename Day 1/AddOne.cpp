class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
      int n = digits.size();
      int carry = 1;
      int value = 0;
        for(int i = digits.size() - 1;i>=0;i--){
           int sum = digits[i] +carry;
            value = sum%10;
             carry = sum/10;
          ans.push_back(value);
          
        }
      ans.push_back(carry);
      if(ans.at(n) == 0)ans.pop_back();
      reverse(ans.begin(),ans.end());
      
      return ans;
    }
};
