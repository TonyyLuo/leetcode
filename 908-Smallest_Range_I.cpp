class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int hi = A[0];
        int lo = A[0];
        
        for (int i = 1; i < A.size(); ++i) {
            hi = std::max(hi, A[i]);
            lo = std::min(lo, A[i]);
        }
        
        if ((hi-lo) <= K*2)
            return 0;
        else
            return (hi-lo-(2*K));
    }
};
