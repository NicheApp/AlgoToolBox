//Link - https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1#
int dpsol(int i, int j, int a[],vector<vector<int>> &dp){
    if(i==j) return 0;
    
    if(dp[i][j]!=-1)
    return dp[i][j];
   dp[i][j]=INT_MAX;
    for(int k=i;k<j ;k++){
        
    dp[i][j]=min(dp[i][j],dpsol(i,k,a,dp)+dpsol(k+1,j,a,dp)+a[i-1]*a[k]*a[j]);
    }
    return dp[i][j];
    
}
    int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>> dp(N+1,vector<int>(N+1,-1));
       return dpsol(1,N-1,arr,dp);
    }
