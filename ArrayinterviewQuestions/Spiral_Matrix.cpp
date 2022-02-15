#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralCopy( const vector<vector<int>>& inputMatrix ) {
  // your code goes here
  int n= inputMatrix.size();
  int m= inputMatrix[0].size();
  int dir=0;
  int top=0,down=n-1,left=0,right=m-1;
  vector<int>ans;
  while(top<=down && left<=right){
    
    if(dir==0){
      
      for(int i=left;i<=right;i++){
        ans.push_back(inputMatrix[top][i]);
      }
      top++;
    }
    else if(dir==1){
      
      for(int i=top;i<=down;i++){
        
        ans.push_back(inputMatrix[i][right]);
      }
     right--; 
    }
    else if(dir==2){
      
      for(int i=right;i>=left;i--){
        ans.push_back(inputMatrix[down][i]);
      }
      down--;
    }
    else if(dir==3){
      for(int i=down;i>=top;i--){
        ans.push_back(inputMatrix[i][left]);
      }
      left++;
    }
    
    dir= (dir+1)%4;
    
  }
  return ans;
}

int main() {
  return 0;
}
