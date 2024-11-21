//Distancia minima para todo i y j
// n^3
void floyd() {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) AM[i][j] = INF;
        AM[i][i] = 0;
    }
    for (int k = 1; k <= l; ++k) {
        int i, j, t;
        cin >> i >> j >> t;
        AM[i][j] = t;
        AM[j][i] = t;
    }
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            for (int k = 1; k <= n; ++k)
                AM[j][k] = min(AM[j][k], AM[j][i] + AM[i][k]);
}