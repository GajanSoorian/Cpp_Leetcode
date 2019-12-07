class Solution {
    
public:
    bool isValid(std::string s) {
            std::stack<char> parStack;
        for(auto& x: s)
        {
            switch(x)
            {
            case '(':
            case '{':
            case '[':
                parStack.push(x);
                break;
            case ')':    
                if((parStack.size()>0) && (parStack.top()=='('))
                    parStack.pop();
                else
                    return false;
                break;
            case '}':
                if((parStack.size()>0) && (parStack.top()=='{'))
                    parStack.pop();
                else
                    return false;
                break;
            case ']':
                if((parStack.size()>0) && (parStack.top()=='['))
                    parStack.pop();
               else
                    return false;
                break;
            default:
                    ;
            }
        }
     return parStack.empty() ;
    }
};
