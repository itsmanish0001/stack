string preToPost(string str) {
        
        stack<string> s;
        int n = str.size();
       
       for(int i = n-1; i >=0; i--){
           char ch = str[i];
           if(isalpha(ch)){
               string a = "";
               s.push(a+ch);
           }
           else{
               auto it1=s.top();
               s.pop();
               auto it2 = s.top();
               s.pop();
               s.push(it1+it2+ch);
           }
       }
       
       
       return s.top();
    }
