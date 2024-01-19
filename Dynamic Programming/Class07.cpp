
//DISTINCT SUBSEQUENCE 
// MEMOIZATION = DP
// TC = O(N)
// SC = O(N)+O(N)

class Solution {
public:
    
      int dist(int i, int j, string S, string T,  vector<vector<int>>&dp)
    {
        if(j<0)
        {
            return 1;
        }
        
        if(i<0)
        {
             return 0;
        }
        
          if(dp[i][j]!=-1)
          {
              return dp[i][j];
          }
        
        
        // Match possible
        if(S[i]==T[j])
        {
            int r = dist(i-1, j-1, S, T, dp);
            int l = dist(i-1, j, S, T, dp);
            dp[i][j] = r+l;
            return dp[i][j];
        }
        
        // Unmatch 
        else
        {
            dp[i][j] = dist(i-1, j, S, T, dp);
            return dp[i][j];
        }
    }
    
    int numDistinct(string s, string t) {
        
      int n = s.size();
      int m = t.size();
      int i = n-1;
      int j = m-1;
        
      vector<vector<int>>dp(n, vector<int>(m, -1));
      
      int ans = dist(i, j, s, t, dp);
      return ans;
    }
};






///EDIT DISTANCE 
//MEMOIZATION = DP
// TC = O(N)
// SC = O(N)

class Solution {
public:
    
      int dist(int i, int j, string S, string T,  vector<vector<int>>&dp)
    {
        if(j<0)
        {
            return 1;
        }
        
        if(i<0)
        {
             return 0;
        }
        
          if(dp[i][j]!=-1)
          {
              return dp[i][j];
          }
        
        
        // Match possible
        if(S[i]==T[j])
        {
            int r = dist(i-1, j-1, S, T, dp);
            int l = dist(i-1, j, S, T, dp);
            dp[i][j] = r+l;
            return dp[i][j];
        }
        
        // Unmatch 
        else
        {
            dp[i][j] = dist(i-1, j, S, T, dp);
            return dp[i][j];
        }
    }
    
    int numDistinct(string s, string t) {
        
      int n = s.size();
      int m = t.size();
      int i = n-1;
      int j = m-1;
        
      vector<vector<int>>dp(n, vector<int>(m, -1));
      
      int ans = dist(i, j, s, t, dp);
      return ans;
    }
};