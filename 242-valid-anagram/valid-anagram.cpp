class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        int i, C[26] = {0};

        for(i = 0; s[i] != '\0'; i++)
            C[s[i] - 97]++;
        
        for(i = 0; t[i] != '\0'; i++){
            C[t[i] - 97]--;
            if(C[t[i] - 97] < 0)
                return false;
        }
            
        return true;
    }
};

// if (s.length() != t.length())
//     return false;

// std::sort(s.begin(), s.end());
// std::sort(t.begin(), t.end());

// return s == t;

// Time Complexity: O(m logn)