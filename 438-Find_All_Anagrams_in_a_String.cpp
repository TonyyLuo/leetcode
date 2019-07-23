class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> table;
        int size = p.size();
        vector<int> result;
        
        if (s.size() == 0 || s.size() < size)
            return result;
        
        //initialized frequency table with all chars in p
        for (int i = 0; i < size; ++i) {
            table[p[i]]++;
        }
        
        int count = table.size();
        int start = 0;
        int end = 0;
        
        while (end < s.size()) {
            
            //look at newest character
            if (table.find(s[end]) != table.end()){
                table[s[end]]--;
                if (table[s[end]] == 0)
                    count--;
            }
            
            while (count == 0) {
                if (end - start == size - 1)
                    result.push_back(start);
                
                //look at oldest character
                if (table.find(s[start]) != table.end()){
                    table[s[start]]++;
                    if (table[s[start]] > 0)
                        count++;
                }
                start++;
            }
            
            end++;
        }
        return result;
    }
};
