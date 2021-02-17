class Solution {
public:
    void dfs(vector<vector<int>>& rooms,int s,vector<bool>&visited){
        if(visited[s]!=true){
            visited[s]=true;
            for(int i=0;i<rooms[s].size();i++){
                dfs(rooms,rooms[s][i],visited);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n);
        for(int i=0;i<n;i++)visited[i]=false;
        //visited[0]=true;
        bool flag=false;
        dfs(rooms,0,visited);
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                flag=true;
                break;
            }
        }
        if(flag)return false;
        else return true;
        
    }
};