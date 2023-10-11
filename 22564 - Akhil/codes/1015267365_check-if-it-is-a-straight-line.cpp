class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        // auto j;
        vector<int>zerovectorX;
        vector<int>zerovectorY;
        size_t vectorsize=coordinates.size();
        if (vectorsize==2) return true;
        for (auto i=coordinates.begin();i!=coordinates.end();i++){
            zerovectorX.push_back((*i)[0]);
            zerovectorY.push_back((*i)[1]);
        }
        set<int> mysetX(zerovectorX.begin(), zerovectorX.end());
        set<int> mysetY(zerovectorY.begin(), zerovectorY.end());
        if(mysetX.size()==1 || mysetY.size()==1) return true;
        if(mysetX.size()!=zerovectorX.size() || mysetY.size()!=zerovectorY.size()) return false;
        int len=1;
        for (auto i =coordinates.begin();(i+2)!=coordinates.end();i+=2){
            int dy=((*(i+1))[1])-((*i)[1]);
            int dx=((*(i+1))[0])-((*i)[0]);
            int dY=((*(i+2))[1])-((*(i+1))[1]);
            int dX=((*(i+2))[0])-((*(i+1))[0]);
            if((dy/dx)!=(dY/dX)) return false;
            len+=2;
            if(len>=vectorsize) return true;
        }
        return true;
    }
};