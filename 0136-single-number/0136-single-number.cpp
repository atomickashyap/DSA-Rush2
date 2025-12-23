class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int nums_length = nums.size();
        int ans = 0;
        for(int i = 0 ; i< nums_length; i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};