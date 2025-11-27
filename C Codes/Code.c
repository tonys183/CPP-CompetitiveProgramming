#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define forr(i, a, b) for(int i = (a); i < (b); i++)
#define forrinv(i, a, b) for(int i = (a); i > (b); i--)
#define YesNo(x) (x) ? printf("Yes\n") : printf("No\n")
#define INF 1000000000
#define ll long long


// 1. Fibonacci
int fibonacci(int n){
    int *dp = (int *)malloc((n+1) * sizeof(int));
    dp[0] = 0; dp[1] = 1;
    
    forr(i, 2, n+1) dp[i] = dp[i-1] + dp[i-2];

    free(dp);
    return dp[n];
}

// 2. Min coins
int minCoins(int coins[], int m, int V){
    int *dp = (int *)malloc((V+1) * sizeof(int));
    forr(i, 0, V+1) dp[i] = INF;
    dp[0] = 0;

    forr(i, 0, m){
        forr(x, coins[i], V+1){
            dp[x] = MIN(dp[x], dp[x-coins[i]]+1);
        }
    }

    free(dp);
    return dp[V];
}

// 3. Subset sum
int isSubsetSum(int set[], int n, int sum){
    int *dp = (int *)malloc((sum+1) * sizeof(int));
    forr(i, 0, sum+1) dp[i] = 0;
    dp[0] = 1;

    forr(i, 0, n){
        for(int x=sum; x>=set[i]; x--){
            if(dp[x - set[i]]) dp[x] = 1;
        }
    }

    free(dp);
    return dp[sum];
}

// 6. Min path sum (Grid)
int minPathSum(int m, int n, int grid[m][n]){
    static int dp[1000];
    
    dp[0] = grid[0][0];
    forr(i,1,n) dp[i] = dp[i-1] + grid[0][i];

    forr(i,1,m){
        dp[0] += grid[i][0];
        forr(j,1,n){
            dp[j] = MIN(dp[j], dp[j-1]) + grid[i][j];
        }
    }

    return dp[n-1];
}

// 7. Min palindrome
int minCut(char *str, int n){
    int palindro[n][n];
    int dp[n];

    forr(i,0,n) {
        forr(j,0,n) palindro[i][j] = 0;
        palindro[i][i] = 1;
    }

    forr(s,2,n+1){
        for(int i=0; i<=n-s;i++){
            int j = i+s-1;
            if(s == 2) palindro[i][j] = (str[i] == str[j]);
            else palindro[i][j] = (str[i] == str[j]) && palindro[i+1][j-1];
        }
    }

    forr(i,0,n){
        if(palindro[0][i]) dp[i] = 0;
        else{
            dp[i] = INT_MAX;
            forr(j,0,i) 
                if(palindro[j+1][i]) 
                    dp[i] = MIN(dp[i], dp[j]+1);   
        }
    }

    return dp[n-1];
} 

// 8. Min multiplication grid
int matrixChainOrder(int p[], int n){
    int dp[n][n];
    forr(i,1,n) dp[i][i] = 0;

    forr(s, 2, n){
        for(int i=1; i<=n-s; i++){
            int j=i+s-1;
            dp[i][j] = INF;

            forr(k,i,j){
                int cost = dp[i][k] + dp[k+1][j] + p[i-1] * p[k] * p[j];
                dp[i][j] = MIN(dp[i][j], cost);
            }
        }
    }

    return dp[1][n-1];
}

// 9. Max increasing subsequence
int longIncSubseq(int arr[], int n){
    int maxo=1;
    int dp[n];

    forr(i,0,n){
        dp[i] = 1;
        forr(j,0,i){
            if(arr[j] < arr[i] && dp[j]+1 > dp[i]) dp[i] = dp[j]+1;
        }
        maxo = MAX(dp[i], maxo);
    }

    return maxo;
}

// 10. Can partition in subsets
int canPartition(int nums[], int n){
    int sum=0;
    forr(i,0,n) sum+=nums[i]; 

    if(!(sum%2)){
        int obj = sum/2;
        int dp[obj+1];
        forr(i,0,obj+1) dp[i] = 0;
        dp[0] = 1;

        forr(i,0,n) for(int j=obj; j>=nums[i]; j--) dp[j] = dp[j] || dp[j-nums[i]];
        return dp[obj];
    } else return 0;
}



// 3A. Subset sum (Reconstruir)
int main(int set[], int n, int sum){;
    int *dp = (int *)malloc((sum+1) * sizeof(int));
    int *parent = malloc((sum+1) * sizeof(int));

    forr(i, 0, sum+1) { dp[i] = 0; parent[i] = -1; }
    dp[0] = 1;

    forr(i, 0, n){
        for(int x=sum; x>=set[i]; x--){
            if(!dp[x] && dp[x - set[i]]) { dp[x] = 1; parent[x] = set[i]; }
        }
    }

    YesNo(dp[sum]);
    int x = sum;
    while (x > 0){
        int v = parent[x];
        printf("%d ", v);
        x -= v;
    }

    free(dp);
    free(parent);
    return ;
}


/* === DP with Strings === */
/*
// 4. Longest common subsequence
int main(){
    int m, n;
    scanf("%d", &m, &n);
    return 0;
}

// 5. Edit distance
int main(){
    int m, n;
    scanf("%d", &m, &n);
    return 0;
}
*/