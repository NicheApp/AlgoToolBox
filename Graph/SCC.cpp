class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs(vector<int> adj[] ,vector<bool> &visited,int s,stack<int> &st){
	    
	    visited[s]=true;
	    
	  for(auto it : adj[s]){  
	      if(!visited[it]){
	         
	            dfs(adj,visited,it,st);
	      }
	  }
	  
	  st.push(s);
	    
	}
	
	void revdfs(vector<int> adj[] ,vector<bool> &visited,int s){
	    
	    visited[s]=true;
	    for(auto it: adj[s]){
	        if(!visited[it]){
	            
	            revdfs(adj,visited,it);
	        }
	        
	    }
	    
	}
	
	
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        
        vector<bool> visited(V,false);
        stack<int> st;
        for(int i=0;i<V;i++){
            
            if(!visited[i]){
            dfs(adj,visited,i,st);
            }
        }
        vector<int> transpose[V+1];
        
        for(int i=0;i<V;i++){
            
            visited[i]=false;
            for(auto it: adj[i]){
                
                transpose[it].push_back(i);
            }
        }
        int count=0;
        while(!st.empty()){
            
            int x= st.top();
            if(!visited[x]){
            revdfs(transpose,visited,x);
            count++;
            }
            st.pop();
            
        }
        
        
       return count;
        
    }
};
