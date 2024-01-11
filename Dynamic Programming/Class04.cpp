

/// MIN PATH SUM

class Solution {
public:
    
    int ratmaze(int i, int j, int n, int m, vector<vector<int>>&dp, vector< vector< int> > &mat)
{
    //Edge case
     if(i>n-1 || j>m-1)
     {
         return 1e9;
     }
     
     //Base Case
     if(i==n-1 && j==m-1)
     {
         return mat[i][j];
     }
     
     if(dp[i][j]!=-1)
     {
         return dp[i][j];
     }
     
     
     int right = mat[i][j]+ratmaze(i, j+1, n, m, dp, mat);
     int down = mat[i][j]+ratmaze(i+1, j, n, m, dp, mat);
     
     
     int ans = min(right, down);
     dp[i][j] = ans;
     
     return dp[i][j];
}
    
    
    int minPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int i = 0;
        int j = 0;
        vector<vector<int>>dp(n, vector<int>(m, -1));
        
        int answer = ratmaze(i, j, n, m, dp, grid);
        return answer;
    }
};