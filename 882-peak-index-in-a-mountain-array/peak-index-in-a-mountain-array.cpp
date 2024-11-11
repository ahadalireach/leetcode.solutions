class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0, r = arr.size() - 1;
        while(l < r){
            int mid = l + (r - l) / 2;

            if(arr[mid] > arr[mid + 1])
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};

// int i = 0, j = arr.size() - 1;
// while(i <= j){
//     int mid = (i + j) / 2;

//     if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
//         return mid;
//     else if(arr[mid] > arr[mid - 1])
//         i = mid + 1;
//     else
//         j = mid - 1;
// }

// return -1;