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
https://atcoder.jp/contests/abc422/tasks/abc422_c

Problem Statement
Takahashi has some letters. Each letter he has is A, B, or C. Initially, he has nA letters A, nB letters B, and nC letters C.

He can hold one contest by using one letter A, one letter C, and additionally any one letter, for a total of three letters. 
Specifically, he can hold AAC by using two letters A and one letter C, ABC by using one letter each of A, B, and C, 
and ACC by using one letter A and two letters C.

He wants to hold as many contests as possible using the letters he currently has. Find the maximum number of contests he can hold.
T test cases are given, so report the answer for each of them.

Constraints
1 ≤ T ≤ 2×10^5
 
For each test case,
    0 ≤ nA ≤10^9
    0 ≤ nB ≤10^9
    0 ≤ nC ≤10^9
​
All input values are integers.

Input
The input is given from Standard Input in the following format:
T
testcase1
testcase2
⋮
testcaseT

testcasei (1 ≤ i ≤ T) represents the i-th test case and is given in the following format:
nA nB nC
 
Output
Output over T lines. On the i-th line (1 ≤ i ≤ T), output the answer to the i-th test case.
*/

void solve(ll a, ll b, ll c) {
    // min(a, c) so 3k <= a + b + c
    ll maxo = min(min(a, c), (a + b + c) / 3);
    cout << maxo << "\n";
}

int main(){
    opIO
    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    return 0;
}