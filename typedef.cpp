//Densidad, aristas que tiene / aristas que puede tener
// DP, top down(Recursivo, hasta el caso base) 
// Bottom up(Iterativo, desde el caso base)
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;
const int INF = 1e9;

//Hash matriz
ll asigPos(const vvi& m) {
    ll pos = 0, temp = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            pos += (m[i][j] + 1) * temp; temp *= 31;  
        }
    }
    return pos%1000000007;
}
