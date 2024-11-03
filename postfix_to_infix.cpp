 string postToInfix(string str) {
       
       stack<string> s;
       
       for(auto ch: str){
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
               s.push("("+it1+ch+it2+")");
           }
       }
       
       
       return s.top();
       
       
       
       
       
       
       
    }
