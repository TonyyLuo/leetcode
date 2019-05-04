#include <vector>
#include <unordered_map>
#include <utility>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> nums2;
        std::vector<int> result;
        
        //insert numbers and indexes into unordered_map
        for (int i=0; i<nums.size(); i++){
            nums2.insert(std::make_pair(nums[i], i));
        }
        
        //traverse numbers
        for (int i=0; i<nums.size(); i++){
            int second_num = target - nums[i];
            auto found = nums2.find(second_num);
            //see if target-num[i] exists in the list
            if (found != nums2.end() && i != found->second){
                result.push_back(i);
                result.push_back(found->second);
                return result;
            }
        }
        return result;
    }
};
