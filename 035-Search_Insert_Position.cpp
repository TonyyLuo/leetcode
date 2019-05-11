class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        
        if (target <= nums[0]) return 0;
        if (target > nums[high]) return (high+1);
        if (target == nums[high]) return (high);
        
        while (low<high){
            mid = (low+high)/2;
            
            if (target < nums[mid]){
                high = mid;
            }
            else if(target > nums[mid]){
                low = mid+1;
            }
            else if(target == nums[mid]){
                return (mid);
            }
        }
        return low;
    }
};
