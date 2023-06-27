int climbStairs(int n){
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    };
    int way = 0;
    int dp[100];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for(int  i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}