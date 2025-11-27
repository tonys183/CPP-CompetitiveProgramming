#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define forr(i, a, b) for(auto i = (a); i < (b); i++)
#define INF 1000000000
#define ll long long

/*
// Fibo
int fibo(int n, int *dp){
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (dp[n] != -1) return dp[n];
    dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
    return dp[n];
}

int main(){
    int n;
    scanf("%d", &n);
    int *dp = (int *)malloc((n+1) * sizeof(int));
    dp[0] = 0;
    dp[1] = 1;

    for (int i=2; i<=n; i++) dp[i] = dp[i-1] + dp[i-2];
    printf("%d\n", dp[n]);

    free(dp);
    return 0;
}


// Dice combinations
int main(){
    const int MOD = 1000000007; 
    int n;
    scanf("%d", &n);

    int *dp = (int *)malloc((n+1) * sizeof(int));
    dp[0] = 1;

    for(int i=1; i<=n; i++){
        dp[i] = 0;
        for(int x=1; x<=6; x++) if(i-x>=0) dp[i] = (dp[i]+dp[i-x]) % MOD;
    }
    printf("%d", dp[n]);

    free(dp);
    return 0;
}


// Minimizing Coins
int main(){
    int n, X;
    scanf("%d %d", &n, &X);

    int *coins = (int *)malloc((n+1) * sizeof(int));
    for(int i=0; i<n; i++) scanf("%d", &coins[i]);

    int *dp = (int *)malloc((X+1) * sizeof(int));
    for(int i=0; i<=X; i++) dp[i] = INF;
    dp[0] = 0;

    for(int i=0; i<n; i++){
        int coin = coins[i];
        for(int x=coin; x<=X; x++) dp[x] = MIN(dp[x], dp[x - coin]+1);
    }
    printf("%d", dp[X] != INF ? dp[X] : -1);
    
    free(dp);
    free(coins);
    return 0;
}


// Coin Combinations I
int main(){
    const int MOD = 1000000007;
    int n, X;
    scanf("%d %d", &n, &X);

    int *coins = (int *)malloc(n * sizeof(int));
    forr(i, 0, n) scanf("%d", &coins[i]);

    int *dp = (int *)malloc((X+1) * sizeof(int));
    forr(i, 0, X+1) dp[i] = 0;
    dp[0] = 1;

    forr(i, 1, X+1){
        forr(c, 0, n){
            if(i-coins[c]>=0) dp[i] = (dp[i]+dp[i-coins[c]]) % MOD;
        }
    }
    printf("%d", dp[X]);

    free(coins);
    free(dp);
    return 0;
}


// Coin Combinations II
int main(){
    const int MOD = 1000000007;
    int n, X;
    scanf("%d %d", &n, &X);

    int *coins = (int *)malloc(n * sizeof(int));
    forr(i, 0, n) scanf("%d", &coins[i]);

    int *dp = (int *)malloc((X+1) * sizeof(int));
    forr(i, 0, X+1) dp[i] = 0;
    dp[0] = 1;

    forr(c, 0, n){
        forr(i, coins[c], X+1){
            dp[i] = (dp[i]+dp[i-coins[c]]) % MOD;
        }
    }
    printf("%d", dp[X]);

    free(coins);
    free(dp);
    return 0;
}


// Removing Digits
int main(){
    int n;
    scanf("%d", &n);

    int *dp = (int *)malloc((n+1) * sizeof(int));
    forr(i, 0, n+1) dp[i] = INF;
    dp[0] = 0;

    forr(i, 1, n+1){
        int tmp = i;
        while(tmp>0){
            int d = tmp%10;
            tmp /= 10;
            if(d != 0) dp[i] = MIN(dp[i], dp[i-d]+1);
        }
    }
    printf("%d", dp[n]);

    free(dp);
    return 0;
}


// Grid Paths I
int main(){
    const int MOD = 1000000007;
    int n;
    scanf("%d", &n);

    char grid[n][n+1];
    ll dp[n][n];
    forr(i, 0, n) scanf("%s", grid[i]);
    forr(i, 0, n) forr(j, 0, n) dp[i][j] = 0;

    dp[0][0] = 1;
    forr(i, 0, n) {
        forr(j, 0, n){
            if(grid[i][j] == '*') { dp[i][j] = 0; continue; }

            if(i>0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            if(j>0) dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
        }
    }
    
    printf("%d", dp[n-1][n-1]);
    return 0;
}
*/