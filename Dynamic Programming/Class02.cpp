//Maximum Sum of Adjacent Element = By Dp

#include <bits/stdc++.h> 
using namespace std;

int maxi(vector<int>&nums, int idx , vector<int>&dp)
{

   //Base case
    if(idx>=nums.size())
    {
        return 0;
    }

     if(dp[idx]!=-1)
     {
         return dp[idx];
     }
    //pick 
    int pick = nums[idx]+maxi(nums, idx+2, dp);
    //non pick 
    int np = 0+maxi(nums, idx+1, dp);

    int ans = max(pick, np);
    dp[idx] = ans;
    return dp[idx];
    
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    vector<int>dp(nums.size(), -1);
    int i =0;
   return  maxi(nums, i, dp);
}


 
///HOUSE ROBBER - 2 By DP

class Solution {
public:
    
    //Array1 
    int maxi_1(vector<int>&nums, int l, int h, vector<int>&dp1)
    {
        
        
        if(l>=nums.size()-1)
        {
            return 0;
        }
        
        if(dp1[l]!=-1){
            return dp1[l];
        }
        
         //pick 
        int p = nums[l]+maxi_1(nums, l+2, h, dp1);
        //np
        int np = 0+maxi_1(nums, l+1, h,dp1);
        
        int ans1 = max(p, np);
        dp1[l]=ans1;
        return dp1[l];
    }
    
    
    
    //Array2
    int maxi_2(vector<int>&nums, int l, int h, vector<int>&dp2)
    {
         if(l>=nums.size())
        {
            return 0;
        }
        
        if(dp2[l]!=-1){
            return dp2[l];
        }
        
        //pick 
        int p = nums[l]+maxi_2(nums, l+2, h, dp2);
        //np
        int np = 0+maxi_2(nums, l+1, h,dp2);
        
        int ans2 = max(p, np);
        dp2[l]=ans2;
        return dp2[l];
    }
    
    
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>dp1(nums.size()-1, -1);
        vector<int>dp2(nums.size(), -1);
        
        if(n==1) return nums[0];
        
        int max1 = maxi_1(nums, 0, n-2, dp1);
        int max2 = maxi_2(nums, 1, n-1, dp2);
        
        int ans = max(max1, max2);
        
        return ans;
        
        
    }
};