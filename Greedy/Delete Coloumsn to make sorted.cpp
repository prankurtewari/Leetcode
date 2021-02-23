class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs[0].length();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<strs.size()-1;j++){
                if(strs[j][i]>strs[j+1][i]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};