class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long int i=1,b=0;
        int a,n;
        if (x==0)
        return true;
        if (x<0)
        return false;
        n=log10(x);
        n=n+1;
        while(i<=n){
             a=x%10;
             b=b+a*pow(10,n-i);
             x=x/10;
             i+=1;
        }
        cout<<b;
        if(num==b)
        return true;
        else 
        return false;
    }
};