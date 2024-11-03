string postToPre(string str) {
       
       stack<string> s;
       
       for(auto ch: str){
           if(isalpha(ch)){
               string a = "";
               s.push(a+ch);
           }
           else{
               auto it1=s.top();
               s.pop();
               auto it2 = s.top();
               s.pop();
               s.push(ch+it2+it1);
           }
       }
       
       
       return s.top();
       
    }
