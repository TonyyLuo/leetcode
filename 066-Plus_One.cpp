class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        bool done = false;
        
        while (!done) {
            if (digits[i] == 9) {
                if (i != 0) {
                    digits[i] = 0;
                    i--;
                }
                else {
                    digits[i] = 1;
                    digits.push_back(0);
                    done = true;
                }
            }
            else {
                digits[i]++;
                done = true;
            }
        }
        return digits;
        
    }
};
