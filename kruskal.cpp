// Arbol de recubrimiento minimo (MST)
// Empiezo por cualquier nodo, ElogE
// Menor densidad de aristas
int kruskal(int V, int E, vector<iii>& EL) {
  sort(EL.begin(), EL.end());
  
  int mst_cost = 0, num_taken = 0;
  UnionFind UF(V);
  
  for (int i = 0; i < E; ++i) {
    auto [w, u, v] = EL[i];
    if (UF.isSameSet(u, v)) continue;
    mst_cost += w;
    UF.unionSet(u, v);
    ++num_taken;
    if (num_taken == V-1) break;
  }

  return mst_cost;
}