class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::unordered_set<int> counted;
        for (int i=0; i<nums.size(); i++){
            if (counted.find(nums[i]) == counted.end()){
                counted.insert(nums[i]);
            }
            else if (counted.find(nums[i]) != counted.end()){
                counted.erase(nums[i]);
            }
        }
        return (*counted.begin());
    }
};
