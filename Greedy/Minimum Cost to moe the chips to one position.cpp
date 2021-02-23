class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int e=0,o=0;
        int n=position.size();
        for(int i=0;i<n;i++){
            if(position[i]%2)o++;
            else e++;
        }
        return min(o,e);
        //return m;
        
    }
};