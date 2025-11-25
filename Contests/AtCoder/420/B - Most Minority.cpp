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
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc420/tasks/abc420_b

Problem Statement
People 1,2,…,N (where N is odd) conducted M votes where each person chooses either 0 or 1.
Each person's vote for each round is given as N strings S1,S2,…,SN of length M consisting of 0 and 1, 
where the j-th character of Si represents person i's vote content for the j-th vote.

In each vote, people who were in the minority receive 1 point.
More precisely, points are given according to the following rules:

Suppose x people chose 0 and y people chose 1 in that vote.
If x=0 or y=0, everyone receives 1 point for that vote.
Otherwise, if x<y, only people who voted 0 in that vote receive 1 point.
Otherwise, only people who voted 1 in that vote receive 1 point.
Note that since N is odd, x=y never occurs.

After finishing M votes, find all people who have the highest total score from those votes.

Constraints
N is an odd number satisfying 1≤N≤99.
M is an integer satisfying 1≤M≤100.
Si is a string of length M consisting of 0 and 1.

Input
The input is given from Standard Input in the following format:
N M
S1
S2
⋮
SN
​
Output
Output all person numbers with the highest score in ascending order of person number, separated by spaces.
*/

void solve(int n, int m, vs& s) {
    vi pts(n, 0);
    for(int i=0;i<m;i++){
        int ptsO = 0;
        for (int j=0; j<n; j++) if (s[j][i] == '1') ptsO++;
        int ptsZ = n - ptsO;
        if(!(ptsZ) || !(ptsO)) for (int j=0; j<n; j++) pts[j]++;
        else{
            char min = (ptsZ < ptsO) ? '0' : '1';
            for(int j=0; j<n; j++) if (s[j][i] == min) pts[j]++;
        }
    }

    int maxi = *max_element(ALL(pts));
    for(int i=0; i<n; i++) if(pts[i] == maxi) cout << i+1 << " ";
    cout << "\n";
}

int main(){
    opIO
    int n,m;
    cin >> n >> m;
    vs s(n);
    for(int i=0; i<n; i++) cin >> s[i];
    solve(n, m, s);
    return 0;
}