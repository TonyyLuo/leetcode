class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int lo = 0;
        int hi = A.size() - 1;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (A[mid] < A[mid + 1])
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo;
    }
};
