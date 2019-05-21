class Solution {
public:
    string reverseOnlyLetters(string S) {
        int left = 0;
        int right = S.size()-1;
        
        while (left<right){
            if (((S[left] >= 'a' && S[left] <= 'z') || (S[left] >= 'A' && S[left] <= 'Z'))
               && ((S[right] >= 'a' && S[right] <= 'z') || (S[right] >= 'A' && S[right] <= 'Z'))){
                char temp = S[left];
                S[left] = S[right];
                S[right] = temp;
                left++;
                right--;
            }else{
                if (!(S[left] >= 'a' && S[left] <= 'z') && !(S[left] >= 'A' && S[left] <= 'Z')){
                    left++;
                }
                if (!(S[right] >= 'a' && S[right] <= 'z') && !(S[right] >= 'A' && S[right] <= 'Z')){
                    right--;
                }    
            }
        }
        return S;
    }
};
