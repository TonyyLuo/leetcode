class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() == 0 || s.size() == 1) {
            return s;
        }
        
        string longest;
        for (int i = 0; i < s.size() - 1; i++) {
            //check letter as core
            int right = i+1;
            int left = i-1;
            while (right < s.size() && left >= 0 && s[right] == s[left]) {
                left--;
                right++;
            }
            if (right - (left+1) > longest.size()) {
                longest = s.substr(left + 1, right - (left+1));
            }
            
            //check gap between curr and next chars as core
            if (s[i] == s[i+1]) {
                right = i+2;
                left = i-1;
                while (right < s.size() && left >= 0 && s[right] == s[left]) {
                    left--;
                    right++;
                }
                if (right - (left+1) > longest.size()) {
                    longest = s.substr(left + 1, right - (left+1));
                }
            }
        }
        return longest;
    }
};
