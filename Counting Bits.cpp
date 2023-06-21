class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output;
        
        for (int m = 0; m <= n; m++){
            int count = 0;
            for(int i = 0; i < 32; i++) {
                if (m & (1 << i)) {
                    count++; 
                }
            }
            output.push_back(count);
        }
        return output;
    }
};