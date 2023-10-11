class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int p=nums.size();
        // int p=sizeof(nums)/sizeof(nums[0]);
        int p=nums.size();
        std::set<int>myset(nums.begin(),nums.end());
        int q=myset.size();
        if(p==q)
            return false;
        else
            return true;
    return 0;
    }
};