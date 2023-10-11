class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int i=0;
        map<int,int>mymap;
        vector<int>result;
        for (int i=0;i<nums.size();i++){
            if(mymap.find(target-nums[i])==mymap.end()){
                mymap.insert(make_pair(nums[i],i));
            }
            else{
                result.push_back(mymap[target-nums[i]]);
                result.push_back(i);
            }
            // j+=1;
        }
    return result;
    }

};