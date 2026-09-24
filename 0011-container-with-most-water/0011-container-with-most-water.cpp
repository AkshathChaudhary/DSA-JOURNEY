class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1,maxwater=0;
        while(l<r){
            int w=r-l;
            int ht=min(height[l],height[r]);
            int area=   w*ht;
            maxwater=max(maxwater,area);
            height[l]<height[r]?l++:r--;
        }
        return maxwater;
    }
};