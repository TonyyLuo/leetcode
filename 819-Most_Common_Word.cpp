class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> freq;
        
        //create banned set to access in O(1)
        unordered_set<string> ban;
        for (int i = 0; i < banned.size(); i++) {
            ban.insert(banned[i]);
        }
        
        //convert all to lower
        for (int i = 0; i < paragraph.size(); i++) {
            if (paragraph[i] >= 'A' && paragraph[i] <= 'Z') {
                paragraph[i] = tolower(paragraph[i]);
            }
            else if (!(paragraph[i] >= 'a' && paragraph[i] <= 'z')) {
                paragraph[i] = ' ';
            }
        }
        
        stringstream ss(paragraph);
        
        int max = 0;
        string result;
        
        string word;
        while (ss >> word) {
            
            if (ban.find(word) == ban.end()) {
                freq[word]++;
                if (freq[word] > max) {
                    max = freq[word];
                    result = word;
                }
            }
        }
        return result;
    }
};
