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

/*
https://codeforces.com/contest/2162/problem/A

You are given an array a of length n.

Your task is to find the maximum possible average value of any subarray∗ of the array a.

Formally, for any indices l,r such that 1 ≤ l ≤ r ≤ n, define the average of the subarray al,al+1,…,ar
as the sum of elements divided by the number of elements or:
avg(l,r) = 1 / (r−l+1) * i=l to r ∑ai

Output the maximum value of avg(l,r) over all choices of l,r.

∗
An array b s a subarray of an array a if b can be obtained from a
by deletion of several (possibly, zero or all) elements from the beginning 
and several (possibly, zero or all) elements from the end. 
In particular, an array is a subarray of itself.

Input
The first line contains a single integer t (1 ≤ t ≤ 10^4),
the number of test cases.

The first line of each testcase contains a single integer 
n (1 ≤ n ≤ 10^5), the length of the array a.

The second line of each testcase contains n integers 
a1,a2,…,an (1 ≤ ai ≤ 10)the elements of the array.

Output
For each testcase, output a single integer — the maximum average 
of any subarray of the given array.

It can be shown that the answer is always an integer.
*/

int t, n, x;

void solve(){
    cin >> n;
    int maxo = 0;
    forr(i, 0, n){
        cin >> x;
        if(x > maxo) maxo = x;
    }
    cout << maxo << "\n";
}

int main(){
    opIO
    cin >> t;
    while(t--) solve();
    return 0;
}