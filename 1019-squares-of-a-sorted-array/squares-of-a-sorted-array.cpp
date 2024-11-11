class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int l = 0, r = nums.size() - 1;

        for(int i = nums.size() - 1; i >= 0; i--)
            if(abs(nums[l]) > abs(nums[r])){
                res[i] = nums[l] * nums[l];
                l++;
            }else{
                res[i] = nums[r] * nums[r];
                r--;
            }
        return res;
        // Time Complexity: O(n)
        // Space Complexity: O(n)
    }
};

// for (int& num : nums) 
    // num = num * num;
        
// std::sort(nums.begin(), nums.end());
// return nums;

// Time Complexity: O(n logn)
// Space Complexity: O(1)