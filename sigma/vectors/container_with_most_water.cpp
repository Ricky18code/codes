class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int start = 0;
        int end = size-1;
        int water_trapped = 0;
        int max_water = 0;
        while(start < end){
            water_trapped = min(height[start] , height[end]) * (end - start);
            if(water_trapped > max_water){
                max_water = water_trapped;
            }
            if(height[start] > height[end]){
                end--;
            }else{
                start++;
            }
        }
        return max_water;
    }
};
