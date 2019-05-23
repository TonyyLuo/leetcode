class Solution {
public:
    char findTheDifference(string s, string t) {
        std::unordered_multiset<char> letters;
        
        for (int i = 0; i < s.size(); i++){
            letters.insert(s[i]);
        }
        for (int i = 0; i < t.size(); i++){
            auto it = letters.find(t[i]);
            if (it != letters.end()){
                letters.erase(it);
            }
            else{
                return (t[i]);
            }
        }
        return *(letters.begin());
    }
};
