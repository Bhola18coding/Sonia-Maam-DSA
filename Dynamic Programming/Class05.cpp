

// 01.  LONGEST COMMON SUBSEQUENCE 

class Solution {
public:
    //Recursively 
    int count(int i, int j, string s1, string s2,  vector<vector<int>>&dp)
    {
        //Base Case
        if(i<0 || j<0)
        {
            return 0;
        }
        
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        //match  = i-1, j-1
        if(s1[i]==s2[j])
        {
            return dp[i][j]=1+ count(i-1, j-1, s1, s2, dp);
        }
        
        //Unmatch
        else 
        {
            int r = count(i-1, j, s1, s2, dp);
            int l = count(i, j-1, s1, s2, dp);
            dp[i][j] = max(r, l);
            return dp[i][j];
        }
        
    }
    
    
    int longestCommonSubsequence(string text1, string text2) {
        
        int i=text1.size()-1;
        int j=text2.size()-1;
        int n= text1.size();
        int m = text2.size();
        vector<vector<int>>dp(n, vector<int>(m,-1));
        int ans = count( i,  j,  text1, text2, dp);
        return ans;
        
        
        
    }
};








//02. LONGEST PALINDROMIC SUBSEQUENCE

class Solution {
public:
    
    int count (int i, int j, string s)
    {
        //Base Case
        if(i==j)
        {
            return 1;
        }
        
        if(i>j)
        {
            return 0;
        }
        
        
        //match 
        if(s[i]==s[j])
        {
            return 2+count(i+1, j-1, s);
        }
        
        //Unmatch
        else 
        {
            int r =count(i+1, j, s);
            int l =count(i, j-1, s);
            
            return max(r,l);
            
        }
    }
    
    int longestPalindromeSubseq(string s) {
        
        int i = 0;
        int j= s.size()-1;
        return count(i, j, s);
    }
};












//03. SHORTEST COMMON SUPERSUBSEQUENCE


class Solution
{
    public:
    
       //Recursively 
    int count(int i, int j, string s1, string s2,  vector<vector<int>>&dp)
    {
        //Base Case
        if(i<0 || j<0)
        {
            return 0;
        }
        
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        //match  = i-1, j-1
        if(s1[i]==s2[j])
        {
            return dp[i][j]=1+ count(i-1, j-1, s1, s2, dp);
        }
        
        //Unmatch
        else 
        {
            int r = count(i-1, j, s1, s2, dp);
            int l = count(i, j-1, s1, s2, dp);
            dp[i][j] = max(r, l);
            return dp[i][j];
        }
        
    }
    
    
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        int i=X.size()-1;
        int j=Y.size()-1;
        vector<vector<int>>dp(m, vector<int>(n, -1));
        int ans = m+n - count(i, j, X, Y, dp);
        return ans;
    }
};