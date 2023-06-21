class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int output = (1 + n) * n / 2;
        for (int i = 0; i < nums.size(); i++) {
            output -= nums[i];
        }
        return output;
    }
};