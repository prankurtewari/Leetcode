class Solution {
public:
    int find(int parrent[],int x){
        if(parrent[x]==x)return x;
        return find(parrent,parrent[x]);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& v) {
        int n=v.size();
        int parrent[n+1];
        vector<int>res(2);
        for(int i=1;i<=n;i++)parrent[i]=i;
        for(int i=0;i<n;i++){
       int x = find(parrent,v[i][0]); // find parent of a node
        int y = find(parrent,v[i][1]);
        
        if(x != y){ // if both node have different parent then make one of a node as parent (smallest node) 
            
            parrent[y] = x; 
           
        }
        else{   // if both node have already same parent then it forms cycle in a graph
            res[0] = v[i][0];
            res[1] = v[i][1];
        
        }
        }
return res;}
};