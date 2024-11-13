class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int result = 0;

        for(int num : nums){
            if(count.find(num) != count.end())
                result += count[num];
            count[num]++;
        }
        
        return result;
        // Time complexity: O(n)
        // Space complexity: O(n)
    }
};

// Approach 1: 
// Time complexity: O(n²)
// for(int i = 0; i < n; i++)
//     for(int j = i; j < n; j++)
//         if(nums[i] == nums[j] && i < j) 
//             res++;

// Approach 2:
// Time complexity: O(n²) 
// for(int i = 0; i < n; i++)
//     for(int j = i + 1; j < n; j++)
//         if(nums[i] == nums[j]) 
//             res++;