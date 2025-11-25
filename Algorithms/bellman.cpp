//Ruta min. en grafo dirigido con pesos negativos
// V*E
void solve(vector<vpii> &AL){
    vi dist(v+1, INF); dist[s] = 0;
    for (int i = 1; i < v; ++i) {
        bool modified = false;
        for (int u = 1; u <= v; ++u)
            if (dist[u] != INF)
                for (auto &[v, w] : AL[u]) {
                    if (dist[u]+w >= dist[v]) continue;
                    dist[v] = dist[u]+w;
                    modified = true;
                }
        if (!modified) break;
    }
}

bool hasNegativeCycle = false;
  for (int u = 0; u < V; ++u)
    if (dist[u] != INF)
      for (auto &[v, w] : AL[u])
        if (dist[v] > dist[u]+w) hasNegativeCycle = true;