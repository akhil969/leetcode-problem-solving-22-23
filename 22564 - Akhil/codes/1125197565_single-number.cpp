class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0;
        int j=nums[i];
        cout<< nums.size();
        for(i=0;i<nums.size()-1;i++){
            j=j^nums[i+1];
        }
        return j;
    }
};