 int priority(char ch){
        if(ch == '('){
            return 0;
        }
        else if(ch == '+' || ch == '-'){
            return 1;
        }
        else if(ch == '*' || ch == '/'){
            return 2;
        }
        else if(ch == '^'){
            return 3;
        }
       
    }
    
    string infixToPostfix(string str) {
        
       string ans = "";
       stack<char> s;
       
       for(auto ch: str){
           if(isalpha(ch) || isdigit(ch)){
               ans.push_back(ch);
           }
           else if(ch == '('){
               s.push(ch);
           }
           else if(ch == ')'){
               while(s.top() != '('){
                   ans.push_back(s.top());
                   s.pop();
               }
               s.pop();
           }
           else{
               while(s.size() != 0 && priority(ch) <= priority(s.top())){
                   ans.push_back(s.top());
                   s.pop();
               }
               s.push(ch);
           }
       }
       
       
       while(s.size() != 0){
           ans.push_back(s.top());
           s.pop();
       }
       
       
       return ans;
       
       
       
       
    }
