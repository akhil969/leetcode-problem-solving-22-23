class Solution {
public:
int getindex(vector<int>v, int k){
            auto it=find(v.begin(),v.end(),k);  //gives the pointer
            int index=it-v.begin();
            return index;
        }
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>mystring(score.size()," ");
        int count=0;
        priority_queue<int>pq;
        for(int i=0;i<score.size();++i){
            pq.push(score[i]);
        }
        while(!pq.empty())
        {
            count+=1;
            int a=pq.top();
            int index=getindex(score,a);
            if(count==1) mystring[index]="Gold Medal";
            else if(count==2) mystring[index]="Silver Medal";
            else if(count==3) mystring[index]="Bronze Medal";
            else{
                string stri = to_string(count);
                mystring[index]=stri;
            }
            pq.pop();
        }
        return mystring;
    }
};