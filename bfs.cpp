vi visi;
vvi grafito, levels;
void solve(int nodo, int level){
    queue<pair<int, int>> q;
    q.push({nodo, level});
    visi[nodo] = 1;

    while(!q.empty()){
        pair<int, int> a = q.front();
        q.pop();
        int nodoT = a.first;
        int levelT = a.second;
        maxi = max(maxi, levelT);

        for(int v : grafito[nodoT]){
            if(!visi[v]){
                visi[v] = 1;
                levels[levelT + 1].push_back(v);
                q.push({v, levelT + 1});
            }
        }
    }
}