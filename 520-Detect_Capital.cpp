class Solution {
public:
    bool detectCapitalUse(string word) {
        bool first = (word[0] >= 'A' && word[0] <= 'Z');
        bool lower = !first;
        int caps = false;
        
        for (int i = 1; i < word.size(); ++i) {
            if (word[i] >= 'A' && word[i] <= 'Z'){
                caps = true;
                if (!first || lower)
                    return false;
            } 
            else {
                lower = true;
                if (caps)
                    return false;
            }
        }
        return true;
    }
};
