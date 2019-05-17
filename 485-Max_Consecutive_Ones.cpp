class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int consec = 0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 1){
                consec++;
            }
            else{
                if (consec > max){
                    max = consec;
                }
                consec = 0;
            }
        }
        if (consec>max){
            max = consec;
        }
        return max;
    }
};
