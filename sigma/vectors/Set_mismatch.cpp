class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(2);
        vector<int> freq (size,0);
        for(int i=0 ; i<size ; i++){
            freq[nums[i]-1]++;
        }
        for(int i=0 ; i<size ; i++){
            if(freq[i] == 2){
                ans[0] = i+1;
            }else if(freq[i] == 0){
                ans[1] = i+1;
            }
        }
        return ans;
    }
};
