//Ruta min. hacia todos los nodos desde un nodo inicial
// nlogn + m
void Dijkstra(int st, int end){
    memset(dp, -1, sizeof(dp));
    priority_queue<pair<int, int>> pq;
    dp[st] = 0; pq.push({0, st});
    while(!pq.empty()){
        st = pq.top().second; int w = -pq.top().first; pq.pop();
        if(st == end) break;
        if(dp[st] != w) continue;
        for(auto &p : G[st]){
            int nxt = p.first; int w = p.second;
            if(dp[nxt] < 0 || dp[st] + w < dp[nxt])
                dp[nxt] = dp[st]+w, pq.emplace(-dp[nxt], nxt);
        }
    }
}