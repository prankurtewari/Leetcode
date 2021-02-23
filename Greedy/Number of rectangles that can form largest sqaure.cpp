class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        int m=INT_MIN;
        int c=0;
        for(int i=0;i<n;i++){
            int z=min(rectangles[i][0],rectangles[i][1]);
            if(z==m){c++;}
            else if(z>m){m=z;c=1;}
            
        }
        return c;
    }
};