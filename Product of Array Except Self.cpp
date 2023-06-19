class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> frombegin(n);
        frombegin[0] = 1;
        vector<int> fromlast(n);
        fromlast[0] = 1;

        for(int i = 1; i < n; i++){
            frombegin[i] = frombegin[i-1] * nums[i-1];
            fromlast[i] = fromlast[i-1] * nums[n-i];
        }

        vector<int> res(n);
        for(int i =0; i < n; i++){
            res[i] = frombegin[i] * fromlast[n-1-i];
        }
        return res;
    }
};