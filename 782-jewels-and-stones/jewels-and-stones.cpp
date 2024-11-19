class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_map<char, char> mp;
        for(auto j : jewels)
            mp[j] = j;
        
        for(auto s : stones)
            if(mp.find(s) != mp.end()) count++;
        return count;
        // Time complexity: O(n)
    }
};

// Time complexity: O(n²)
// int count = 0;
// for(int i = 0; i < jewels.size(); i++)
//     for(int j = 0; j < stones.size(); j++)
//         if(jewels[i] == stones[j]) count++;
// return count;

// Time complexity: O(n) 
// int count = 0;
// unordered_map<char, char> mp;
// for(int i = 0; i < jewels.size(); i++)
//     mp[jewels[i]] = jewels[i];
        
// for(int i = 0; i < stones.size(); i++)
//     if(mp.find(stones[i]) != mp.end())
//         count++;
// return count;