class Solution {
public:
     bool isCharacter(char c){
        // return (std::isalnum(c));
        return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
    }

    bool isPalindrome(string a) {
        string s;
        int n = a.size();
        
        for(int i = 0; i < n; i++)
            if(isCharacter(std::tolower(a[i])))
                s.push_back(std::tolower(a[i]));
        
        int m = s.size();
        for(int i = 0, j = m - 1; i < m / 2; i++, j--) 
            if(s[i] != s[j]) 
                return false;
        
        return true;
        // Time complexity: O(n)
        // Space complexity: O(n)
    }
};