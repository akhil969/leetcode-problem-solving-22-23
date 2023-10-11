class Solution {
public:
    int getSum(int a, int b) {
        double x=pow(2,a);
        double y=pow(2,b);
        return log2(x*y);
    }
};