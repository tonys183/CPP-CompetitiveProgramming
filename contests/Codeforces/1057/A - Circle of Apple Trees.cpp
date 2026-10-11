#include <bits/stdc++.h>

#define POWEROFTWO(n) ((n) > 0 && !((n) & ((n) - 1)))
#define SET(m, i) ((m) | (1 << (i)))
#define TEST(m, i) ((m) & (1 << (i)))
#define CLEAR(m, i) ((m) &~ (1 << (i)))
#define DEBUG(n) (cout << (n) << "\n");
#define CLEAN(arr) (memset(arr, 0, sizeof(arr)))
#define ALL(v) (v).begin(), (v).end()
#define forr(i, a, b) for(auto i = (a); i < (b); i++)
#define YN(x) cout << ((x) ? "YES" : "NO") << "\n";
#define opIO ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;
typedef set<int> si;

/*
https://codeforces.com/contest/2153/problem/A

There are n apple trees arranged in a circle. Each tree bears exactly one apple, 
and the beauty of the apple on the i-th tree is given by bi for all 1 ≤ i ≤ n. 
You start in front of tree 1.

At each tree, you may choose to either eat the apple or skip it. After making 
your choice, you move to the next tree: from tree i, you move to tree 
i+1 for 1 ≤ i ≤ n−1, and from tree n, you move back to tree 1. 
This process continues indefinitely as you move through the trees in a cycle.

However, you have a special condition: you may only eat an apple if its beauty 
is strictly greater than the beauty of the last apple you ate. 
For example, if b=[2,1,2,3] and you eat the apple on tree 1 (beauty 2), 
you cannot eat the apples on trees 2 and 3 because their beauties are not greater than 2.
However, you may eat the apple on tree 4 since b4 = 3 > 2.

Note that you are allowed to skip an apple when you first encounter it, 
and you can choose to eat it later on a subsequent cycle.
Your task is to determine the maximum number of apples you can eat 
if you make optimal decisions on when to eat or skip each apple.

Input
Each test contains multiple test cases. The first line contains the number of 
test cases t (1 ≤ t ≤ 500). The description of the test cases follows.

The first line of each test case contains a single integer n (1 ≤ n ≤ 100),
the number of apple trees.

The second line of each test case contains n integers b1,b2,…,bn (1 ≤ bi ≤ n),
the beauty of the apples on the trees.

Note that there are no constraints on the sum of n over all test cases.

Output
For each test case, output a single integer representing the maximum number of apples you can eat.
*/

void solve(int n, si &app){
    forr(i, 0, n) {
        int x; cin >> x;
        app.insert(x);
    }
    cout << app.size() << "\n";
}

int main(){
    opIO
    int t;
    cin >> t;
    while(t--){
        si app; int n;
        cin >> n;
        solve(n, app);
    }
    return 0;
}