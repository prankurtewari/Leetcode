class Solution {
public:
    int find(int parrent[],int x){
        if(parrent[x]!=x) return find(parrent,parrent[x]);
        return x;
    }
    void uniondsu(int parrent[],int x,int y){
        int xp=find(parrent,x);
        int yp=find(parrent,y);
        parrent[xp]=yp;
    }
    int regionsBySlashes(vector<string>& grid) {
        int n=grid.size();
        int parrent[4*n*n];
        for(int i=0;i<4*n*n;i++)parrent[i]=i;
        for(int i=0;i<n;i++){
            //int start=0;
            for(int j=0;j<n;j++){
                int base=4*n*i+4*j;
                if(grid[i][j]!='/'){
                    uniondsu(parrent,base,base+2);
                    uniondsu(parrent,base+1,base+3);
                }
                if(grid[i][j]!='\\'){
                    uniondsu(parrent,base,base+1);
                    uniondsu(parrent,base+2,base+3);
                }
                if(j<n-1){
                    uniondsu(parrent,base+2,base+5);
                }
                if(i<n-1)
                    uniondsu(parrent,base+3,(4*n*(i+1)+4*j));
                //start++;
            }
        }int ans=0;
        for(int i=0;i<4*n*n;i++){
            if(parrent[i]==i)ans++;
        }
        return ans;
    }
};