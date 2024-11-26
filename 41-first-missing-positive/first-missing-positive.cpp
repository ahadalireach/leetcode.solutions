class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int expected = 1;
        
        for(int num : nums)
            if(num == expected)
                expected++;
        
        return expected;   
    }
};