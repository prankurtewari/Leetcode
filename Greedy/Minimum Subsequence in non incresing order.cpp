class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        int s=0,n=nums.size();
        for(int i=0;i<n-1;i++)s+=nums[i];
        v.push_back(nums[n-1]);
        int sum=nums[n-1];
        n-=2;
        while(true){
            if(s<sum)break;
            else{
               s-=nums[n];
               sum+=nums[n];
                v.push_back(nums[n]);
                n--;
            }
        }
        return v;
    }
};