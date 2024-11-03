string preToInfix(string str) {
        int n = str.size();
        stack<string> s;
       
       for(int i = n-1; i >= 0; i--){
           char ch = str[i];
           if(isalpha(ch) || isdigit(ch)){
               string a = "";
               a.push_back(ch);
               s.push(a);
           }
           else{
               auto it2 = s.top();
               s.pop();
               auto it1 = s.top();
               s.pop();
               s.push("("+it2+ch+it1+")");
           }
       }
       
       
       return s.top();
    }
