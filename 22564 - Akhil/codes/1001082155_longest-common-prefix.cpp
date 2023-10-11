class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int result=INT_MAX;
       int i=0;
       int j;
       for (i=0;i<strs.size();i++){
           j=0;
           while(j<strs[0].size()&&strs[0][j]==strs[i][j]) j++;
           if(result>j) result=j;
       }
    //    result=max(result,j);
    if(result==INT_MAX) result=0;
       return strs[0].substr(0,result);
    }
};