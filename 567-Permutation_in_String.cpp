class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> table;
        
        if (s2.size() < s1.size())
            return false;
        
        for (int i = 0; i < s1.size(); i++) {
            table[s1[i]]++;
        }
        
        int count = table.size();
        int start = 0;
        int end = 0;
        
        int size = s1.size();
        
        while (end < s2.size()) {
            if (table.find(s2[end]) != table.end()) {
                table[s2[end]]--;
                if (table[s2[end]] == 0)
                    count--;
            }
            
            while (count == 0) {
                if (end - start + 1 == size)
                    return true;
                
                if (table.find(s2[start]) != table.end()) {
                    table[s2[start]]++;
                    if (table[s2[start]] > 0)
                        count++;
                }
                start++;
            }
            end++;
        }
        
        return false;
            
    }
};
