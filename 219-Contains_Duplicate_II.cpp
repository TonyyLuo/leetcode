class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map <int, int> counted;
        
        for (int i=0; i<nums.size(); i++){
            if (counted.find(nums[i]) == counted.end()){
                counted.insert(std::make_pair(nums[i], i));
            }
            else{
                if (i-counted.find(nums[i])->second <= k){
                    return true;
                }
                else{
                    counted.find(nums[i])->second = i;
                }
            }
        }
        return false;
    }
};
