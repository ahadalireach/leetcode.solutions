class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        for(int i = 0, j = i + n; i < n; i++, j++){
            res.push_back(nums[i]);
            res.push_back(nums[j]);
        }
        return res;
        // Time complexity: O(n)
        // Space complexity: O(n)  
    }
};