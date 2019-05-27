class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int low = 0;
        int high = A.size() - 1;
        
        while(low < high){
            if ((A[low] % 2 != 0) && (A[high] % 2 == 0)){
                int temp = A[low];
                A[low] = A[high];
                A[high] = temp;
            }
            if (A[low] %2 == 0)
                low++;
            if (A[high] %2 != 0)
                high--;
            
        }
        return A;
    }
};
