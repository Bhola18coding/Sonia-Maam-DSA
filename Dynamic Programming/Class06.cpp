
#include<bits/stdc++.h>
using namespace std;


// MINIMAL COST = CODING NINJA 
//FROG JUMP K DISTANCE 

///MEMOIZATION = DP
// TC = O(N)
// SC = O(N) + O(N)
int mincost(int n, int i, int k, vector<int>&arr, vector<int>&dp)
{

   if(i>=arr.size())
   {
       return 1e9;
   }


   if(i==arr.size()-1)
   {
       return 0;
   }

   if(dp[i]!=-1)
   {
       return dp[i];
   }

   int mini = 1e9;
   int r=0;
   for(int t=1; t<=k ;  t++)
   {
        
        if(i+t<n)
        {
          r =  mincost(n,  i+t,  k, arr,dp) + abs(arr[i]-arr[i+t]);

        }

         mini = min(mini, r);
       
   }

   return dp[i]=mini;


}

int minimizeCost(int n, int k, vector<int> &heights){
   
   vector<int>dp(n, -1);
   int i=0;
   int ans =  mincost( n,  i,  k, heights, dp);
   return ans;


   
}








// Minimum number of deletions and insertions = GFG 
//MEMOIZATION = DP 
// LCS = LOngest common subsequence form question
//TC = O(N)
// SC = O(N)+O(N)


class Solution{
		

	public:
	
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
    
    
	
	
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int i= str1.size()-1;
        int j= str2.size()-1;
        int n= str1.size();
        int m = str2.size();
        vector<vector<int>>dp(n, vector<int>(m,-1));
        int ans = count( i,  j,  str1, str2, dp);
        int mainAns = n+m-(2*ans);
        return mainAns;
	    
	} 

};