class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        if (s <= 1) {
            return s;
        } 
        
        int hi = 1;
        int lo = 0;
        
        while (hi < s) {
            if (nums[lo] == nums[hi]) {
                hi++;
            }
            else{
                lo++;
                nums[lo] = nums[hi];
                hi++;
                
            }
        }
        return lo+1;
    }
};
