int solve(vvi& G) {
    vi color(n, -1);
    queue<int> q;
    for (st = 0; st < n; st++) {
        if (color[st] == -1) {
            color[st] = 0; 
            q.push(st);
            while (!q.empty()) {
                st = q.front(); 
                q.pop();
                for (int &nxt : G[st]) {
                    if (color[nxt] == -1) color[nxt] = (color[st] + 1) % 2, q.push(nxt);
                    else if (color[nxt] == color[st]) return 0;
                }
            }
        }
    }
    return 1;
}