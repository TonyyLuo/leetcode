class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool prev = (n % 2 == 1);
        n = n / 2;
        while (n > 0) {
            if ((n % 2 == 1 && prev) || (n % 2 == 0 && !prev))
                    return false;
            prev = !prev;
            n = n / 2;
        }
        return true;
    }
};
