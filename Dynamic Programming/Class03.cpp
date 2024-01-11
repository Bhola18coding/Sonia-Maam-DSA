 #include <bits/stdc++.h> 
 using namespace std;



 //01. FROG JUMP - DP
int fnc (int n, int i, vector<int>arr, vector<int>&dp)
{

    //Base case
    if(i==0)
    {
        return 0;
    }

    if(i<0)
    {
        return 1e9;
    }
    

    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int one = abs(arr[i]-arr[i-1])+fnc(n, i-1, arr, dp);
    int two = abs(arr[i]-arr[i-2])+fnc(n, i-2, arr,dp);
    int ans = min(one, two);
    dp[i] = ans;
    return dp[i];
}


int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    int i = n-1;
    vector<int>dp(n, -1);
    int answer = fnc(n, i, heights, dp);
    return answer;

}




/// CLIMBING STAIRS - DP
 class Solution {
public:
    
    int climb(int n, vector<int>&dp)
    {
       
         if(n==0)
        {
            return 1;
        }
        
        if(n<0)
        {
            return 0;
        }
        
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        int one = climb(n-1, dp);
        int two = climb(n-2, dp);
        dp[n]=one+two;
        return dp[n];
    }
    int climbStairs(int n) {
       vector<int>dp(n+1, -1);
        return climb(n, dp);
        
    }
};




/// 03. TRIBONACCI - DP
 class Solution {
public:
    int fnc (int n, vector<int>&dp)
    {
        if(n==0)
        {
            return 0;
        }
        
        if(n==1|| n==2)
        {
            return 1;
        }
        
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        
        int one = fnc(n-1, dp);
        int two = fnc(n-2, dp);
        int three = fnc(n-3, dp);
        
        dp[n]= one +two+three;
        return dp[n];
    }
    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        
        return fnc(n, dp);
    }
};