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
https://atcoder.jp/contests/abc423/tasks/abc423_a

Problem Statement
You have a bankbook from The Terrifying Bank. The deposit passbook 
of the bank has a terrifyingly scary property that the commission 
fee changes according to the withdrawal amount.

To withdraw money from the passbook, you need to specify the withdrawal 
amount in units of 1000 yen, and pay a commission fee of C yen per 
1000 yen of withdrawal amount separately from the balance. 
Withdrawals are not allowed if they would leave the balance below 0 yen.

When the balance of your passbook from the bank is X yen, 
what is the maximum amount of money you can withdraw from it?

Constraints
1 ≤ X ≤ 10^7
1 ≤ C ≤ 999
All input values are integers.

Input
The input is given from Standard Input in the following format:
X C

Output
Output the answer.
*/

void solve() {
    
}

int main() {
    opIO
    ll x, c;
    cin >> x >> c;
    ll k = x / (1000+c);
    cout << 1000*k << "\n";
    return 0;
}