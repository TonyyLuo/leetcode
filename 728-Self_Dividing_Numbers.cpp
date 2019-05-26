class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int num = left;
        vector<int> result;
        
        while (num <= right){
            int temp = num;
            while (temp != 0){
                int digit = temp % 10;
                if (digit == 0 || (num % digit != 0)){
                    break;
                }
                else if (temp < 10 && (num % digit == 0)){
                    result.push_back(num);
                }
                temp = temp/10;
            }
            num++;
        }
        return result;
    }
};
