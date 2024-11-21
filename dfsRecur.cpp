bitset<18> grafito[18];
bitset<18> visi;

int solve(int n, int nodo, int &maxi, int centas, bitset<18> visi) {
    visi.set(nodo);
    maxi = max(maxi, centas);
    
    for (int i = 0; i < n; i++) {
        if (grafito[nodo][i] && !visi[i]) {
            solve(n, i, maxi, centas + 1, visi);
        }
    }
    return maxi;
}