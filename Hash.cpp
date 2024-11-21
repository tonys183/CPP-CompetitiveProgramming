hashStr(string s, int p, int q){
  unsigned int h=0;
  for(int i=0; s[i]; i++, h%=p){
    h += expt(q, s[i] * h+2, p);
  }
  return h%p;
}

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
