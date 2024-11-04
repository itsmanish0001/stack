class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
       
       stack<long long> st;
       st.push(LLONG_MAX);
       vector<long long> v(n);
       
       for(int i = n-1; i >= 0; i--){
           
           if(st.top() > arr[i]){
               v[i] = st.top();
           }
           
           else{
               while(st.top() <= arr[i]){
                   st.pop();
               }
               v[i] = st.top();
               
           }
           st.push(arr[i]);
           
       }
       
       for(int i = 0; i < n; i++){
           if(v[i] == LLONG_MAX){
               v[i] = -1;
           }
       }
       return v;
    }
    
};
