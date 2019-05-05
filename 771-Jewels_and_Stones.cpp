class Solution {
public:
    int numJewelsInStones(string J, string S) {
        std::unordered_set<char> jewels;
        int count=0;
        
        for (int i=0; i<J.size(); i++){
            jewels.insert(J[i]);
        }
        
        for (int i=0; i<S.size(); i++){
            if (jewels.find(S[i]) != jewels.end()){
                count++;
            }
        }
        
        return count;
    }
};
