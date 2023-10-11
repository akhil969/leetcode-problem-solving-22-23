class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        map<char,int>dup;
        dup.insert(make_pair('I',1));
        dup.insert(make_pair('V',5));
        dup.insert(make_pair('X',10));
        dup.insert(make_pair('L',50));
        dup.insert(make_pair('C',100));
        dup.insert(make_pair('D',500));
        dup.insert(make_pair('M',1000));
        int i=0;
        int value=0;
        value=value+dup[s[i]];
        for(i=1;i<n;i++){
            if(s[i-1]=='I'){
                if(s[i]=='V')
                value=value+3;
                else if(s[i]=='X')
                value=value+8;
                else
                value=value+dup[s[i]];
            }
            else if(s[i-1]=='X'){
                if(s[i]=='L')
                value=value+30;
                else if(s[i]=='C')
                value=value+80;
                else
                value=value+dup[s[i]];
            }
            else if(s[i-1]=='C'){
                if(s[i]=='D')
                value=value+300;
                else if(s[i]=='M')
                value=value+800;
                else
                value=value+dup[s[i]];
                }
            else
            value=value+dup[s[i]];
        }
        return value;     
    }
};