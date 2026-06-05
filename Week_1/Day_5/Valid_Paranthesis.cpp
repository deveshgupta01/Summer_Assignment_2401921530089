
class Solution {
public:
    bool isValid(string s) {
       int  n=s.size();
       stack<char>sr;
       for(int i=0;i<n;i++){
        char ch=s[i];
        if(s[i]=='(' || s[i]=='{' ||s[i]=='['){
            sr.push(ch);
        }
        else{
            if(sr.empty()){
                return false;
            }
            if(s[i]==')' && sr.top()!='('){
                return false;
            }
            if(s[i]=='}' && sr.top()!='{'){
                return false;
            }
            if(s[i]==']' && sr.top()!='['){
                return false;
            }
            sr.pop();
        }
       }
       return sr.empty();
    }
};
