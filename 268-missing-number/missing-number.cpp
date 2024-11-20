class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n * (n + 1) / 2;

        int sum = 0;
        for(auto num : nums)
            sum += num;

        return total - sum;
        // Time complexity: O(n)
        // Space complexity: O(1)
    }
};

// Time complexity: O(log n)
// Space complexity: O(n)
// set<int> res;
// int n = nums.size();

// for(int i = 0; i < n; i++)
//     res.insert(nums[i]);

// for(int i = 0; i <= n; i++)
//     if(res.find(i) == res.end())
//         return i;

// return -1;