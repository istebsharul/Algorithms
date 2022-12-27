#include<bits/stdc++.h>
using namespace std;

// T.C-> 2^n 
    // S.C-> O(n) 
    // thus this will give TLE, optimise approach would be using memoisation
    // int f(int i, vector<int> &nums, int p_i){
    //     if(i==nums.size()) return 0;
    //     int l = 0+f(i+1,prev);
    //     if(p_i==-1 || nums[i]>nums[p_i]){
    //         int l= max(l, 1+f(i+1,prev));
    //     }
    //     return l;
    // }
    
    // Optimised approach
    // T.C-> O(n x n) 
    // S.C-> O(n x n){dp} + O(n){Auxiliary Space for Recursion} 
    int f(int i, vector<int> &nums, int p_i, vector<vector<int>> &dp){
        if(i==nums.size()) return 0;
        if(dp[i][p_i+1]!=-1) return dp[i][p_i+1];//memoization
        int len = 0+f(i+1,nums,p_i,dp);
        if(p_i==-1 || nums[i]>nums[p_i]){
            len = max(len, 1+f(i+1,nums,i,dp));
        }
        return dp[i][p_i+1]=len; // +1 is for coordinate shift as p_i start from -1
    }
    
    

int main(){
    // int lengthOfLIS(vector<int>& nums){
        vector<int> nums={10,9,2,5,3,7,101,18};
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size()+1,-1));
        return f(0,nums,-1,dp);
    // }
}