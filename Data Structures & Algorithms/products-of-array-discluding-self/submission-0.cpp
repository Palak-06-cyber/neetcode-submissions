class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long product = 1;
        int countZeroes = 0;
        
        for(int num : nums){
            if (num == 0){
                countZeroes++;
            } else {
                product *= num;
            }
        }
        
        if (countZeroes > 1){
            return vector<int>(nums.size(), 0);
        } 
        else if (countZeroes == 1) {
            vector<int> output(nums.size(), 0);
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0){
                    output[i] = product;
                    break; 
                }
            }
            return output; 
        } 
        else {
            vector<int> output;
            for(int num : nums){
                output.push_back(product / num);
            }
            return output;
        }
    }
};