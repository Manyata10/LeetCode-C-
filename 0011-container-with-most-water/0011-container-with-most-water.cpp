class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int l=0, r = height.size()-1;
        int area;
        while(l<=r){

            if(height[l]<height[r]){
                area = height[l]*(r-l);
                l++;
            }
            else{
                area = height[r]*(r-l);
                r--;
            }
            maxArea = maxArea < area ? area:maxArea;
        }return maxArea;
    }
};