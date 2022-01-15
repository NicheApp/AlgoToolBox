class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
      
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        int totalfresh=0;
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                if(grid[i][j]==2){
                    
                    q.push({i,j});
                }
                if(grid[i][j]==1){
                    
                   totalfresh++;
                }
                
            }
            
        }
        int time=0;
     while(!q.empty()){
           if(totalfresh<=0)
             break;
        int sz=q.size();
        time++;
    
        for(int k=0;k<sz;k++){
            
          int x = q.front().first;
          int y = q.front().second;
            q.pop();
           
            
            if(x+1<n && grid[x+1][y]==1){
                q.push({x+1,y});
                grid[x+1][y]=2;
                totalfresh--;
            }
            if(x-1>=0 && grid[x-1][y]==1){
                q.push({x-1,y});
                grid[x-1][y]=2;
                totalfresh--;
            }
               if(y-1>=0 && grid[x][y-1]==1){
                q.push({x,y-1});
                grid[x][y-1]=2;
                   totalfresh--;
            }
               if(y+1<m && grid[x][y+1]==1){
                q.push({x,y+1});
                grid[x][y+1]=2;
                   totalfresh--;
            }
            
            
        }
       
        
     }
        if(totalfresh>0) return -1;
        return time;
        
    }
};
