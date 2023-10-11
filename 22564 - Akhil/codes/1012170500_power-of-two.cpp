class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        else if(int(log2(n))==log2(n)) return true;
        else return false;
    }
};