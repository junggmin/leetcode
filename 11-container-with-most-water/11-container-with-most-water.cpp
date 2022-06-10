class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int water=0;
        while(1){
            if(start>=end) break;
            int h = min(height[start],height[end]);
            water = max(water,h*(end-start));
            if(height[start]<height[end]) start++;
            else end--;
        }
        
        return water;
        
    }
};