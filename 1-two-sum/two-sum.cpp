class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            int x = target - nums[i];
            if(mp.find(x) != mp.end())
                return {mp[x], i};
            else
                mp[nums[i]] = i;
        }
        return {};
        // Time complexity: O(n)
    }
};

// Time complexity: O(n²)
// for(int i = 0; i < nums.size(); i++)
//     for(int j = i + 1; j < nums.size(); j++)
//         if(nums[i] + nums[j] == target) return {i, j};
// return {};