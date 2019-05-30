class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int max = nums.size();
        std::unordered_set<int> n;
        std::vector<int> result;
        
        for (int i = 0; i < max; ++i) {
            if (n.find(nums[i]) == n.end())
                n.insert(nums[i]);
            else
                result.push_back(nums[i]);
        }
        for (int i = 1; i <= max; ++i) {
            if (n.find(i) == n.end()){
                result.push_back(i);
                break;
            }
        }
        return result;
    }
};
