class Solution {
public:
  bool bfs(vector<vector<int>>& graph,list<int> &ls,vector<bool> &visited, vector<int> &colour){
              while(!ls.empty()){
        int s=ls.front();
        ls.pop_front();
          
          visited[s]=true;
            
        for(auto it:graph[s]){
            
            if(!visited[it]){ 
                
                if(colour[s]==1){
                    
                    colour[it]=2;
                }
                else if(colour[s]==2){
                    
                    colour[it]=1;
                }
                
                ls.push_back(it);
                
                }
            else{
                
                if(colour[it]==colour[s]){
                    
                    return false;
                }
                
                
            }
            
            }
            
        }
        
        return true;
      
      
      
  }
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
    
        if(n==0 ) return true;
        vector<bool>visited(n,false);
        vector<int>color(n,0);
        
     for(int i=0;i<n;i++){
         if(!visited[i]){
             list<int> ls;
             ls.push_back(i);
              color[i]=1;
        if(!bfs(graph,ls,visited,color))
         return false;
         }
     }
return true;
    }
};
