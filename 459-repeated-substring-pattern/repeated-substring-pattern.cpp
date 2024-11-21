class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        return doubled.substr(1, doubled.size() - 2).find(s) != string::npos;
    }
};

// Substring is a part of the string such that if you repeat it some number of times, the result should still be equal to the original string.

// Approach 1:
// Loop through all possible lengths (i) of the substring (up to n/2) and check if the substring can 
// form the original string by repeating it enough times. If a match is found, return true, otherwise false.
// Time complexity: O(n²)

// int n = s.size();
//         for (int i = 1; i <= n / 2; i++) {
//             if(n % i == 0){
//                 string substring = s.substr(0, i);
//                 string repeated = "";
//                 for (int j = 0; j < n / i; j++)
//                     repeated += substring;
//                 if (repeated == s)
//                     return true;
//             }
//         }
//  return false;

// Approach 2:
// Duplicate string, remove first and last character everytime if duplicated and provided is equal return true, otherwise false.
// Time complexity: O(n)