class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.length();
        int ans=0;
        int l=0,r=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L')l++;
            else r++;
            if(l==r){
                ans++;
                l=r=0;
            }
        }
        return ans;
    }
};