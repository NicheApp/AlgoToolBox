   bool checkCycle(vector<bool> &visited, vector<int> adj[],int parent,int u){
        
         visited[u]=true;
    for(auto it:adj[u]){
        
        if(!visited[it]){
            
           
            if(checkCycle(visited,adj,u,it))
                return true;
            
        }
        else{
            
            if(it!=parent)
                return true;
            
        }
        
    }
    return false; 
    
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V,false);
 
     
             for(int i=0;i<V;i++){
                 
                 if(!visited[i]){
                     if(checkCycle(visited, adj , -1,i))
                        return true;
                 }
                 
             }
     
        return false;
        
    }
};
