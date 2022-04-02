//problem link - https://www.codingninjas.com/codestudio/problems/dfs-traversal_630462?leftPanelTab=1
void dfs(map<int,vector<int>> &graph,vector<bool> &visited,int start,vector<int> &g){
    visited[start]=true;
    
    for(auto it: graph[start]){
        
        if(!visited[it]){
           g.push_back(it);
          dfs(graph,visited,it,g);  
          }
        
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
   map<int, vector<int>> graph;
    vector<bool> visited(V,false);
    for(int i=0;i<edges.size();i++){
        graph[edges[i][0]].push_back(edges[i][1]);
        graph[edges[i][1]].push_back(edges[i][0]);    
    }
    vector<vector<int>> ans;
    for(int i=0;i<V;i++){
        
        if(!visited[i]){
            vector<int> temp;
            temp.push_back(i);
            dfs(graph,visited,i,temp);
            ans.push_back(temp);
        }
        
    }
 
    
   return ans;
}
