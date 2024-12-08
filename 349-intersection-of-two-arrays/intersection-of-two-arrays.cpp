class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> rs;

        for(auto num : nums2)
            if(s.find(num) != s.end())
                rs.insert(num);
        
        return vector<int>(rs.begin(), rs.end());
    }
};