// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i = 1, j = n;
        int bad = -1;

        while(i <= j){
            int mid = i + (j - i) / 2;
            if(isBadVersion(mid)){
                bad = mid;
                j = mid - 1;
            }else if(!isBadVersion(mid)){
                i = mid + 1;
            }
        }
        return bad;
    }
};