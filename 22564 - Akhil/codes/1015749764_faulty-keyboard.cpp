class Solution {
public:
    string finalString(string s) {
    while(1){
        int index=s.find('i');
        if(index==-1) return s;
        for(int j=0;j<index/2;j++){
            swap(s[j], s[index - j - 1]);

        }
        
        s.erase(index,1);
    }
    return s;
    }
};