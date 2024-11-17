class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        int total = 0;
        for(int i = 0; i < gain.size(); i++){
            total += gain[i];
            if(highest < total)
                highest = total;
        }
        return highest;
    }
};