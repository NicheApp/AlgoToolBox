vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<pair<long long,int>> st;
        vector<long long> ans(n,-1);
        for(int i=0;i<n;i++){
            if(st.empty()){ st.push({arr[i],i}); continue;}
            
            if(arr[i]<=st.top().first){
                
            st.push({arr[i],i});
            }
            else
            {
               
                while(!st.empty() && st.top().first<arr[i]){
                    ans[st.top().second]=arr[i];
                    st.pop();
                }
                
                st.push({arr[i],i});
            }
            
            
        }
        
        return ans;
    }
