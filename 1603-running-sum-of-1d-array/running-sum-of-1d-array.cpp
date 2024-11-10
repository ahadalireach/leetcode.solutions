class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
    // Time complexity: O(n)
    // Space complexity: O(1)

    // std::vector<int> result(nums.size());
    // if (!nums.empty()) {
    //     result[0] = nums[0];
    //     for (size_t i = 1; i < nums.size(); ++i) {
    //         result[i] = result[i - 1] + nums[i];
    //     }
    // }
};