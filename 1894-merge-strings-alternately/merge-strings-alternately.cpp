class Solution {
public:
    string mergeAlternately(string A, string B) {
        string word3;
        int i = 0, j = 0;
        
        while(A[i] != '\0' && B[i] != '\0'){
            word3.push_back(A[i++]);
            word3.push_back(B[j++]);
        }

        while(A[i] != '\0')
            word3.push_back(A[i++]);

        while(B[j] != '\0')
            word3.push_back(B[j++]);

        return word3;
    }
};

// Unlike char arrays, std::string in C++ doesn’t allow direct assignment by index without initializing the size. When you try word3[k++] = A[i++];, it will likely cause a runtime error because word3 has no characters initially, so accessing word3[k] is out of bounds.