class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      vector<int> result(nums1.size(),-1);
      //Need to Build a unordered map
      // for that we need a stack(have a monotonic decreasing stack)
      stack<int> mystack;
      unordered_map <int,int> mymap;
      /*Idea: Start traversing from the end of nums2 and check if the stack is going to be monotonic decreasing or not if u insert this nums2[i] . If it is not going to be then pop and insert nums2[i] .Then edit the unordered map as follows: if stack is empty then map the nums2[i] to -1 if stack is not empty then map nums2[i] to top of the stack.*/
      for(int i =nums2.size()-1; i >= 0; i--){
          while(!mystack.empty() && nums2[i]>=mystack.top()) mystack.pop();        // doing pop operation for mantaining monotonic cond
          if(mystack.empty()) mymap[nums2[i]]=-1;  //meaning there is no next greater element 
          else mymap[nums2[i]]=mystack.top(); 
          mystack.push(nums2[i]);
      }
      vector<int> myresult;
      for(int i=0; i< nums1.size(); i++) myresult.push_back(mymap[nums1[i]]);
      return myresult;
    }
};