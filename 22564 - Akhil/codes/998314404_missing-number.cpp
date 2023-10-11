class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int sum=accumulate(nums.begin(),nums.end);
        int a=nums.size();
        int actualSum=(a*(a+1))/2;
        return actualSum-accumulate(nums.begin(),nums.end(),0);
    }
};