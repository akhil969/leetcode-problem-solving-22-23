class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> result;
        int i,j;
        i =0, j=0;
        // cout << i << endl;
        while (i<nums1.size() && j<nums2.size()){
            if( nums1[i]<nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }
            else{
                result.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            result.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            result.push_back(nums2[j]);
            j++;
        }
        long long int res=result.size();
        cout<<res<<endl;
        if ((res%2)!=0) return result[int(res/2)];
        return (result[int(res/2)]+result[int((res-1)/2)])/2; 
    }
};