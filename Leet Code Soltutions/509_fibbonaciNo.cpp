// Best Solution for cpp. Dynamic Programming -- O(n) and O(1)
class Solution1 {
public:
    int fib(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        int prev1 = 0, prev2 = 1;
        for (int i = 2; i <= n; i++) {
            int curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }
        return prev2;
    }
};

// 2) Best Solution -- DA using memorization .. O(n) and O(n)
class Solution {
public:
    int fib(int n, vector<int>& dp) {
        if (n == 0 || n == 1) {
            return n;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        dp[n] = fib(n-1, dp) + fib(n-2, dp);
        return dp[n];
    }

    int fib(int n) {
        vector<int> dp(n+1, -1);
        return fib(n, dp);
    }
};
// So how does this memorization works -- first we intiate two parameters with this function and only thing we don't do here is to recompute the value once donne
// so if you have drawn the revursion tree then you must know that in revurstion it recompute the values a lot and more larger dataset it could be a mental pain
// to do that again and again.
