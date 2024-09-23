unsigned int AVL::hashStr(string s, int p, int q){
  unsigned int h=0;
  for(int i=0; s[i]; i++, h%=p){
    h += expt(q, s[i] * h+2, p);
  }
  return h%p;
}
