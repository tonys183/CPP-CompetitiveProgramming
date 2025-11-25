#include <bits/stdc++.h>

#define POWEROFTWO(n) ((n) > 0 && !((n) & ((n) - 1)))
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
https://atcoder.jp/contests/abc424/tasks/abc424_b

Problem Statement
N people participated in a programming contest consisting of M problems.
The participants are numbered person 1, person 2, …, person N, and 
the problems are numbered problem 1, problem 2, …, problem M.

In this contest, K events occurred in order; in the i-th event (1 ≤ i ≤ K), 
the following happened:

Person Ai solved problem Bi
.
The same event does not occur two or more times. Also, apart from these 
K events, nobody solves any problem.

Output the numbers of all people who solved all problems.
If there are multiple such people, output them in ascending order 
of the time at which they solved all problems.

Constraints
1 ≤ N ≤ 10
1 ≤ M ≤ 10
K ≥ 1
1 ≤ Ai ≤ N
1 ≤ Bi ≤ M
If i != j then (Ai ,Bi) != (Aj ,Bj).
All input values are integers.

Input
The input is given from Standard Input in the following format:
N M K
A1 B1
A2 B2
⋮
AK BK
 
Output
Output, on one line and separated by spaces, the numbers of all people who 
solved all problems, in ascending order of the time at which they solved all problems. 
If there is no person who solved all problems, output nothing.
*/

void solve(int n, int m, int k){
    int ms[11] = {}; int d[11] = {}; vi reso;
    int g = (1 << m) - 1;

    for (int i=0; i<k; i++) {
        int a, b; 
        cin >> a >> b;
        ms[a] |= (1 << (b - 1));
        if (!d[a] && ms[a] == g) {
            d[a] = 1; reso.push_back(a);
        }
    }

    for (int i=0; i<(int)reso.size(); i++) cout << (i ? " " : "") << reso[i];
}

int main(){
    opIO
    int n, m, k;
    cin >> n >> m >> k;
    solve(n, m, k);
    return 0;
}