

///01. MIN PATH SUM

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





//02. UNIQUE PATH - 2 (DP)


#include <bits/stdc++.h>
using namespace std;

int mod = (int)(1e9+7);
int ratmaze(int i, int j, int n, int m, vector<vector<int>>&dp, vector< vector< int> > &mat)
{
    //Edge case
     if(i>n-1 || j>m-1 || mat[i][j]==-1)
     {
         return 0;
     }
     
     //Base Case
     if(i==n-1 && j==m-1)
     {
         return 1;
     }
     
     if(dp[i][j]!=-1)
     {
         return dp[i][j];
     }
     
     
     int right = ratmaze(i, j+1, n, m, dp, mat);
     int down = ratmaze(i+1, j, n, m, dp, mat);
     
     
     int ans = (right + down) % mod;
     dp[i][j] = ans;
     
     return dp[i][j]%mod;
}


int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    int i=0;
    int j =0;
     vector<vector<int>>dp(n, vector<int>(m,-1));
     int ans = ratmaze(i, j, n, m, dp, mat);
     return ans%mod;
}




///03.  RATMAZE DIRECTION - DP
/// This question will cover almost all DP 2D questions


#include <bits/stdc++.h>
using namespace std;

int ratmaze(int i, int j, int n, int m, vector<vector<int>>&dp, vector< vector< int> > &vis)
{
    //Edge case
     if(i>n-1 || j>m-1 || vis[i][j]==-1)
     {
         return 0;
     }
     
     //Base Case
     if(i==n-1 && j==m-1)
     {
         return 1;
     }
     
     if(dp[i][j]!=-1)
     {
         return dp[i][j];
     }
     
     vis[i][j]= 1;
     int right = ratmaze(i, j+1, n, m, dp, vis);
     int down = ratmaze(i+1, j, n, m, dp, vis);
     int diagonal = ratmaze(i+1, j+1, n, m, dp, vis);
     int left = ratmaze(i, j-1, n, m, dp, vis);
     int up = ratmaze(i-1, j, n, m, dp, vis);
     vis[i][j] = 0;
     
     int ans = (right + down+diagonal+left+up)
     dp[i][j] = ans;
     
     return dp[i][j];
}