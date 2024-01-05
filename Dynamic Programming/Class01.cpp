#include <bits/stdc++.h>
using namespace std;

//// 3 Jan 2023
/// StairPath
// int stairpath(int n, vector<int>&dp)
// {
//     if(n==0)
//     {
//         return 1;
//     }
    
//     if(n<0)
//     {
//         return 0;
//     }
    
//     //if the value is present then return 
//     if(dp[n]!=-1)
//     {
//         return dp[n];
//     }
    
    
//     int one=stairpath(n-1, dp);
//     int two = stairpath(n-2, dp);
//     int three = stairpath(n-3,dp);
    
//     dp[n] = one+two+three;
    
//     return dp[n];
    
// }




//RATMAZE
int ratmaze (int i, int j, int n, int m, vector<vector<int>>mat, vector<vector<int>>&dp)
{
    //edge case 
    if(i>=n || j>=m || mat[i][j]==0)
    {
        return 0;
    }
    
    if(i==n-1 && j==m-1)
    {
        return 1;
    }
    
    
    // if the mat[i][j] is not filled with -1
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }
    
    int right = ratmaze(i, j+1, n, m, mat, dp);
    int down  = ratmaze(i+1, j, n, m, mat, dp);
    
    dp[i][j] = right + down;
    return dp[i][j];
}



int main()
{
    
    int n = 4;
    int m = 4;
    int i =0;
    int j =0;
    vector<vector<int>>matrix={{1,1,1,1}, {1,0,1,1}, {1,1,1,1}, {1,1,1,1}};
    vector<vector<int>>dp(n , vector<int>(m, -1)); // dp matrix
    cout<<ratmaze(i, j, n, m, matrix, dp);

    return 0;
}






/* 4 DIRECTION = RIGHT , DOWN , LEFT , UP
// RATMAZE 

#include <bits/stdc++.h>
using namespace std;

//RATMAZE
int ratmaze (int i, int j, int n, int m, vector<vector<int>>mat, vector<vector<int>>vis, vector<vector<int>>&dp)
{
    //edge case 
    if(i>=n || j>=m || i<0 || j<0 || mat[i][j]==0, vis[i][j]==1)
    {
        return 0;
    }
    
    if(i==n-1 && j==m-1)
    {
        return 1;
    }
    
    
    // if the mat[i][j] is not filled with -1
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }
    
    vis[i][j] = 1; // Visited
    int right = ratmaze(i, j+1, n, m, vis,mat, dp);
    int down  = ratmaze(i+1, j, n, m, vis,mat, dp);
    int left  = ratmaze(i, j-1, n, m, vis,mat, dp);
    int up    = ratmaze(i-1, j, n, m, vis,mat, dp);
    vis[i][j]=0; //Un-Visisted
    
    dp[i][j] = right+down+left+up;
    return dp[i][j];
}


int main()
{
    int n = 4;
    int m = 4;
    int i =0;
    int j =0;
    vector<vector<int>>matrix={{1,1,1,1}, {1,0,1,1}, {1,1,1,1}, {1,1,1,1}};
    vector<vector<int>>dp(n , vector<int>(m, -1)); // dp matrix
    vector<vector<int>>vis(n, vector<int>(m, 0)); // visited matrix
    cout<<ratmaze(i, j, n, m, matrix, vis, dp);

    return 0;
}*/