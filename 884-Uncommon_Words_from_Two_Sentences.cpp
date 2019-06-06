class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        std::unordered_map<string, int> M;
        stringstream ss (A + ' ' + B);
        string word;
        while (ss >> word) {
            M[word]++;
        }
        std::vector<string> result;
        for (auto i = M.begin(); i != M.end(); i++) {
            if (i->second == 1)
                result.push_back(i->first);
        }
        return result;
    }
};
