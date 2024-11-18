class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return;
        
        int l = 0;
        for(int r = 0; r < nums.size(); r++)
            if(nums[r] != 0)
                swap(nums[l++], nums[r]);
    }
};

// First approach:
// We can use two arrays one for zeros and other for non-zeros and then we combine both. But in this case we require extra space.

// Second approach:
// Use two pointer and move non-zero values to the start to onward and at end just put remaining values as 0.

// int n = A.size();
// if(n == 1)
//     return;

// int j = 0;
// for(int i = 0; i < n; i++)
//     if(A[i] != 0)
//         A[j++] = A[i];
// while(j < n)
//     A[j++] = 0;

// Third approach:
// Use two pointer left and right pointer move right pointer and check if value is non-zero then swap it with left pointer