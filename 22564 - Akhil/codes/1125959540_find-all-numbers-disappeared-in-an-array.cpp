class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> array((nums.size()),0);
        vector<int> result;
        int i=0;
        // cout<< array.size();
        while(i<nums.size()){
            array[nums[i]-1]+=1;
            // cout<<array[nums[i]]<<endl;
            i+=1;
        }

        i=0;
        while(i<array.size()){
            if(array[i]==0) {
                result.push_back(i+1);
            }
            i++;
        }
        return result;
    }
};