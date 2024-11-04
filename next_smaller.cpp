	void nextSmaller(vector<int>&arr, int n) {
	    stack<int> s;
	    vector<int> ans(n);
	    s.push(INT_MIN);
	    
	    for(int i = n-1; i >=0 ; i--){
	        
	        if(s.top() < arr[i]){
	            ans[i] = s.top();
	        }
	        else{
	            while(s.top() >= arr[i]){
	                s.pop();
	            }
	            
	            ans[i] = s.top();
	        }
	        
	        s.push(arr[i]);
	    }
	    
	    for(int i = 0; i < n; i++){
	        if(ans[i] == INT_MIN){
	            ans[i] = -1;
	        }
	    }
	    
	   
	   
	}
