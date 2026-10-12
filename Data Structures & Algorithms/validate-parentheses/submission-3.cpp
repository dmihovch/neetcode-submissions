class Solution {
public:

    char opposite(char c){
        switch (c){
            case ')': return '(';
            case ']': return '[';
            case '}': return '{';
            default: return ' ';
        }
    }

    bool isValid(string s) {
       if(s.length() < 2) return false;

       std::stack<char> st; 
       st.push(' ');
       for(int i = 0; i<s.length(); i++){
            char cur = s[i];
            if(cur == '[' || cur == '(' || cur == '{'){
                st.push(cur);
                continue;
            }

            if(st.top() == opposite(cur)) {st.pop(); continue;}
            else {return false;}

       }
       if(st.top() == ' '){

       return true;
       }
       return false;

    }
};
