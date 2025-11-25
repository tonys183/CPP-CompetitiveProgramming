#include <bits/stdc++.h>

#define SET(m, i) ((m) | (1 << (i)))
#define TEST(m, i) ((m) & (1 << (i)))
#define CLEAR(m, i) ((m) &~ (1 << (i)))
#define DEBUG(n) (cout << (n) << endl)
#define CLEAN(arr) (memset(arr, 0, sizeof(arr)))
#define ALL(v) (v).begin(), (v).end()
#define opIO ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;


/*
https://codeforces.com/contest/2131/problem/A

In Divergent Universe, The Lever iterates itself given two arrays a and b
of length n. In each iteration, The Lever will do the following:

Choose a random index i such that ai > bi. Then, decrease ai by 1 . If there does not exist such i, ignore this step.
Choose a random index i such that ai < bi. Then, increase ai by 1 . If there does not exist such i, ignore this step.

After each iteration, the Lever will check if step 1 is ignored, and if so, it will end its iteration.

You're given the two arrays. Find the number of iterations that the Lever does. 
It can be shown this number is fixed over all possibilities of random indices that The Lever can choose for each step.

Input
Each test contains multiple test cases. The first line contains the number of 
test cases t (1 ≤ t ≤ 10^4). The description of the test cases follows.

The first line of each test case contains one integer n (1 ≤ n ≤ 10).

The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 10).

The third line of each test case contains n integers b1,b2,…,bn (1 ≤ bi ≤ 10).

Output
For each test case, output one integer — the number of iterations that the Lever does.
*/

int n;

void solve(vi a, vi b) {
    ll iter = 0;
    while (1) {
        int step1 = 0, step2 = 0;
        for (int i=0; i<n; i++) {
            if (a[i] > b[i]) {
                a[i]--; step1 = 1; break;
            }
        }
        for (int i=0; i<n; i++) {
            if (a[i] < b[i]) {
                a[i]++; step2 = 1; break;
            }
        }
        iter++;
        if (!step1) break;
    }
    cout << iter << "\n";
}

int main(){
    opIO
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        vi a(n), b(n);
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) cin >> b[i];
        solve(a,b);
    }
    return 0;
}