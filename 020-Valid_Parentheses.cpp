class Solution {
public:
    bool isValid(string s) {
        std::stack<char> openPar;
        
        for(int i=0; i<s.size(); i++){
            if (s[i]=='(' || s[i]=='{' || s[i]=='['){
                openPar.push(s[i]);
            }
            else if (s[i]==')' || s[i]=='}' || s[i]==']'){
                if (openPar.empty() || (s[i]==')' && openPar.top()!='(') || (s[i]=='}' && openPar.top()!='{') || (s[i]==']' && openPar.top()!='[')) 
                    return false;
                else
                   openPar.pop();      
            }
        }
        
        //if stack is empty, all brackets are closed
        if (openPar.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
