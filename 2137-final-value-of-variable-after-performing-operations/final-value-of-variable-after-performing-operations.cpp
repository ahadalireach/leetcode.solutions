class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (int i = 0; i < operations.size(); ++i) 
            if(operations[i] == "--X" || operations[i] == "X--")
                x--;
            else
                x++;    
        return x;
        // Time complexity = O(n)
        // Space complexity = O(1)
        // We can also solve this using op.find("--X") != string::npos condition
    }
};