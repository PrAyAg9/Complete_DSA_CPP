// DRAW RECURSION TREE FOR CLIMBING STAIRS...-
#include <iostream>
#include <vector>
using namespace std;
// 1) Using Basic Recursion --
int climbkarlo(int n){
    if(n==0 || n==1){
        return 1;
    }
    return climbkarlo(n-1) + climbkarlo(n-2);    
}

// 2) Using Recursion and Dynamic  Programming.
int climbingStairs(int n, vector<int> dp){
    if(n==0 || n==1){
        return 1;
    }
    if(dp[n]!= -1){
        return dp[n];
    }
    dp[n] = climbingStairs(n-1,dp) + climbingStairs(n-2,dp);
    return dp[n];
}
int climbingStairs(int n){
    vector<int> dp(n+1,-1);
    return climbingStairs(n, dp);
}
int main(){
    cout << climbkarlo(14)<<endl;

    cout << climbingStairs(14);
}