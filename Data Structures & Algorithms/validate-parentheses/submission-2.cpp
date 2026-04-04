class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.size();
        int i=0;
        while(i<n){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
                i++;
            }
            else {
                if(st.empty()) return false;
                char t=st.top();
                if((t=='[' && s[i]==']') ||(t=='{' && s[i]=='}') || (t=='(' && s[i]==')') ) {
                    st.pop();
                }else {
                    return false;
                }
                i++;
            }
        }
        if(st.empty()) return true;
        return false;

        
    }
};
