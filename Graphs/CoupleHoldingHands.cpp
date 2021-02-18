class Solution {
public:
    int find(int parent[],int x){
        if(parent[x]==x)return x;
        return parent[x]=find(parent,parent[x]);
    }
    bool uniondus(int parent[],int x,int y){
        int px=find(parent,x);
        int py=find(parent,y);
        if(px==py){
            return true;
        }else{
            if(px>py){
                parent[py]=px;
            }else parent[px]=py;
        } return false;
    }
    int minSwapsCouples(vector<int>& row) {
        if(row.size()==0)return 0;
        int n=row.size();
        int parent[n];
        int ans=0;
        for(int i=0;i<n;i+=2)parent[i]=parent[i+1]=i;
        for(int i=0;i<n;i+=2){
            if(uniondus(parent,row[i],row[i+1]))continue;
            else ans++;
        }
        return ans;
    }
};