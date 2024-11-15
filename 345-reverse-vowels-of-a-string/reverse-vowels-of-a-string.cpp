class Solution {
public:
    bool isVowel(char c) {
        c = std::tolower(c);
    
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;

        while(i < j){
            while(i < j && !isVowel(s[i]))
                i++;
            while(i < j && !isVowel(s[j]))
                j--;
            
            if (i < j) {
                std::swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s; // Time Complexity: O(n)
    }
};

// int i = 0;
// int j = s.size() - 1;

// while (i < j) {
//     if(isVowel(s[i]) && isVowel(s[j])){
//         char temp = s[i];
//         s[i] = s[j];
//         s[j] = temp;
//         i++;
//         j--;
//     }else if(isVowel(s[i]))
//         j--;
//     else
//         i++;
// }