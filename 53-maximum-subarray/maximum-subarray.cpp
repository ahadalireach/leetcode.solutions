class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0];
        int curSum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(curSum < 0)
                curSum = 0;
            curSum += nums[i];
            maxSub = max(curSum, maxSub);
        }
        return maxSub;
    }
};

// Approach 1:
// Time complexity: O(n₃)
// Create and compute each possible sub array for each element then compute sum for each sub array.
// int sum = 0;
// for(int i = 0; i < nums.size(); i++){
//     for(int j = i; j < nums.size(); j++){
//         int current = 0;
//         for(int k = i; k <= j; k++){
//             current += nums[k];
//         }
//         if(current > sum)
//             sum = current;
//     }
// }
// return sum;

// Approach 2:
// Time complexity: O(n²)
// Iterates through each possible starting point (i) of a subarray.
// Iterates from the current starting point (i) to the end of the array (j) to calculate the sum of the subarray starting at i and ending at j.
// currentSum is reset to 0 at the start of each iteration of the outer loop. This ensures that only the sum of the subarray [i, j] is calculated in each iteration.
// After calculating the sum of the subarray [i, j], the maximum sum is updated by comparing currentSum with the current maxSum.
// int maxSum = INT_MIN; 
// for (int i = 0; i < nums.size(); i++) {
//     int currentSum = 0;
//     for (int j = i; j < nums.size(); j++) {
//         currentSum += nums[j];
//         maxSum = max(maxSum, currentSum);
//     }
// }
// return maxSum;

// Approach 1:
// Time complexity: O(n)
// Compute sum if currentSum is negative then set it to 0 means previous is our max sum or next occuring is.