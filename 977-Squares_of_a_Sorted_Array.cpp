class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int i = A.size() - 1;
        int lo = 0;
        int hi = i;
        std::vector<int> result (i+1);
        
        while (lo <= hi){
            if (abs(A[lo]) >= A[hi]){
                result[i] = A[lo]*A[lo];
                lo++;
            }
            else{
                result[i] = A[hi]*A[hi];
                hi--;
            }
            i--;
        }
        
        return result;
    }
};
