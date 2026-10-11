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
typedef vector<ll> vll;

/*
https://codeforces.com/contest/2148/problem/D

Farmer John has a lawnmower, initially turned off. He also has n fields, 
with the i-th field having ai dandelions. He will visit all the fields 
in any order he wants, and each field exactly once.

FJ's lawnmower seems to have a mind of its own. Right before visiting a field, 
it checks if the field has an even or odd number of dandelions. 
If it has an odd number, then the lawnmower toggles its state 
(if it is off, it turns on; if it is on, it turns off). 
Then, if the lawnmower is on, it will cut all dandelions in that field. 
Otherwise, if the lawnmower is off, then FJ will simply visit the field and cut no dandelions.

If FJ visits the n fields in optimal order, what is the maximum total number of dandelions he can cut?

Input
The first line contains an integer t (1 ≤ t ≤ 10^4) — the number of test cases.

The first line contains an integer n (1 ≤ n ≤ 2⋅10^5) — the number of fields.

The following line contains n space-separated integers a1,a2,…,an (1 ≤ ai ≤ 10^9),
the number of dandelions in each field.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.

Output
For each test case, output an integer on a new line: 
maximum dandelions FJ can cut if he visits all n fields in optimal order.
*/

void solve(int n, vll &a) {
    vll od, eve;
    for(int i=0; i<n; i++) {
        if((a[i] % 2)) od.push_back(a[i]);
        else eve.push_back(a[i]);
    }
    if(od.empty()) { cout << 0 << "\n"; return; }

    sort(ALL(od), greater<ll>());
    sort(ALL(eve), greater<ll>());

    ll res = 0;
    for(ll x : eve) { res += x; }
    int c = (od.size()+1) / 2;
    for(int i=0; i<c; i++) res += od[i];
    cout << res << "\n";
}

int main(){
    opIO
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vll a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        solve(n, a);
    }
    return 0;
}