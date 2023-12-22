class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2) return n;
        int i=3;
        int a=1;
        int temp,b=2;
        while(i<=n){
            temp=a+b;
            a=b;
            b=temp;
            i+=1;
        }
        return temp;
    }
};