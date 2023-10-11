class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums)
    {
    vector<int> result(nums.size(), -1);
    stack<int> mystack;
    unordered_map <int,int> mymap;
    for(int i = nums.size() - 1; i >=0 ;i--) mystack.push(nums[i]); 
    for(int i = nums.size()-1 ; i >= 0; i--)
    {
        while(!mystack.empty() && nums[i]>=mystack.top()) mystack.pop();
        if(mystack.empty()) result[i] = -1;
        else result[i] = mystack.top();
        mystack.push(nums[i]);
    }
    //   vector<int> myresult;
    //   for(int i=0; i< nums.size(); i++) myresult.push_back(mymap[nums[i]]);
    //   reverse(result.begin(),result.end());
      return result;
      }
};