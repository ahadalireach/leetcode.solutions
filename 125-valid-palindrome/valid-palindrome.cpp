class Solution {
public:
     bool isCharacter(char c){
        // return (std::isalnum(c));
        return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
    }

    bool isPalindrome(string actualString) {
        string reverseString;
        int n = actualString.size();
        
        for(int i = 0; i < n; i++)
            if(isCharacter(std::tolower(actualString[i])))
                reverseString.push_back(std::tolower(actualString[i]));
        
        int m = reverseString.size();
        for(int i = 0, j = m - 1; i < m / 2; i++, j--) 
            if(reverseString[i] != reverseString[j]) 
                return false;
        
        return true;
            
    }
};