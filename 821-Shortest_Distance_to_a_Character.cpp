class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        std::unordered_set<int> indexes;
        vector<int> result;
        
        for(int i=0; i<S.size(); i++){
            if (S[i] == C){
                indexes.insert(i);
            }
        }
        
        for(int i=0; i<S.size(); i++){
            int right = i;
            int left = i;
            while (indexes.find(right)==indexes.end() && indexes.find(left)==indexes.end()){
                right++;
                left--;
            }
            if (indexes.find(right) != indexes.end()){
                result.push_back(right-i);
            }else if (indexes.find(left) != indexes.end()){
                result.push_back(i-left);
            }
        }
        return result;
    }
};
