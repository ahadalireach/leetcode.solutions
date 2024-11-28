class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < A.size(); ++i) {
            int t = target - A[i];
            if (mp.count(t)) return { mp[t], i };
            mp[A[i]] = i;
        }
        return {};
    }
};

// Time complexity: O(n²)
// for(int i = 0; i < nums.size(); i++)
//     for(int j = i + 1; j < nums.size(); j++)
//         if(nums[i] + nums[j] == target) return {i, j};
// return {};