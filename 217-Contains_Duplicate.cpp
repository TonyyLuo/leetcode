class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set <int> counted;
        for (int i=0; i<nums.size(); i++){
            if (counted.find(nums[i]) != counted.end()){
                return true;
            }
            counted.insert(nums[i]);
        }
        return false;
    }
};
