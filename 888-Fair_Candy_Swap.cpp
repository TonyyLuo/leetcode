class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        std::unordered_set<int> setA;
        std::vector<int> result;
        int totalB = 0;
        int totalA = 0;
        
        for (int i = 0; i < A.size(); ++i){
            setA.insert(A[i]);
            totalA = totalA + A[i];
        }
        
        for (int i = 0; i < B.size(); ++i){
            totalB = totalB + B[i];
        }
        
        int diff = (totalB-totalA)/2;
        
        for (int i = 0; i < B.size(); ++i){
            int temp = B[i] - diff;
            if (setA.find(temp) != setA.end()){
                result.push_back(temp);
                result.push_back(B[i]);
                return result;
            }
            
        }
        return result;
    }
};
