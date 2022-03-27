class Solution {
    public int maxArea(int[] height) {
        int maxWater = Integer.MIN_VALUE;
        int i = 0;
        int j = height.length - 1;
        while(i<j){
            if(height[i]<height[j]){
                maxWater = Math.max(maxWater,(j-i)*height[i]);
              maxArea = max(maxArea,(min(height[i],height[j])*(j-i)))
                i++;
            }
            else{
                maxWater = Math.max(maxWater,(j-i)*height[j]);
                j--;
            }
        }
        return maxWater;
    }
}
