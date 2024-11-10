class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MAX;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int cur = 0;
            for(int j = i; j < n; j++){
                cur = cur | nums[j];
                if(cur >= k)
                    ans = min(ans, j - i + 1);
            }
        }

        if(ans > n) ans = -1;
        return ans;
    }
    // Find the smallest sub array whose bitwise OR operation result must be greater than or equal to k
    // Bitwise OR of number 0: with any number n is always n
    // Video: https://www.youtube.com/watch?v=rs6gnbhxrqI
};