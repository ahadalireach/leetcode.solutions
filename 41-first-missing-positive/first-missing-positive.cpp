class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int expected = 1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == expected){
                expected++;
            }
        }
        
        // for(int num : nums)
        //     if(num == expected)
        //         expected++;
        
        return expected;   
    }
};