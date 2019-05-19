class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        std::map<int, int> rank;
        std::vector<std::string> ans;
        
        for (int i=0; i<nums.size(); i++){
            rank.insert(std::make_pair(nums[i], i));
            ans.push_back("a");
        }
        
        int count = 0;
        for (auto i = rank.begin(); i != rank.end(); i++){
            if (count == rank.size()-1){
                ans[i->second] = "Gold Medal";
            }else if (count == rank.size()-2){
                ans[i->second] = "Silver Medal";
            }else if (count == rank.size()-3){
                ans[i->second] = "Bronze Medal";
            }else{
                ans[i->second] = to_string(rank.size()-count);
            }
            count++;
        }
        return ans;
    }
};
