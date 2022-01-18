class Solution {
public:
    void dfs(vector<vector<char>>& grid ,int n,int m,int i ,int j,vector<vector<bool>> &visited){
        
        visited[i][j]=true;
        if(i+1<n && grid[i+1][j]=='1' && !visited[i+1][j]){
            dfs(grid,n,m,i+1,j,visited);
            
        }
        if(i-1>=0 && grid[i-1][j]=='1' && !visited[i-1][j]){
            dfs(grid,n,m,i-1,j,visited);
            
        }
        if(j+1<m && grid[i][j+1]=='1' && !visited[i][j+1]){
            dfs(grid,n,m,i,j+1,visited);
            
        }
        
        if(j-1>=0 && grid[i][j-1]=='1' && !visited[i][j-1]){
            dfs(grid,n,m,i,j-1,visited);
            
            
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m= grid[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        int count=0;
      for(int i=0;i<n;i++){
          
          for(int j=0;j<m;j++){
              
              if(grid[i][j]=='1' && !visited[i][j]){
                  count++;
                  dfs(grid,n,m,i,j,visited);
              
              }
          }
          
          
      }
        return count;
    }
};
