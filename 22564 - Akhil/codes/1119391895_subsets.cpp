class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        result.push_back(vector<int>());        
        for (int i= 0 ; i<nums.size(); i++)
        {
            int n=result.size();
            for( int j=0;j<n;j++)
            {
                vector<int>dupvector=result[j];

                dupvector.push_back(nums[i]);

                result.push_back(dupvector);
            }
        }
        return result;
    }
};