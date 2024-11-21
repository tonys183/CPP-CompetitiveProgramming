class UnionFind {
private: vector<long long int> p, rank, size;
public:
    UnionFind(int n){
        rank.assign(n, 0);
        p.assign(n, 0);
        size.assign(n, 1);
        
        for(ll i = 0; i < n; i++) p[i] = i;
    }

    ll find(ll i){
        return (p[i] == i) ? i : (p[i] = find(p[i]));
    }
    
    bool inSameSet(ll i, ll j){
        return find(i) == find(j);
    }
    
    void unionSet(ll i, ll j){
        if(!inSameSet(i, j)){
            ll x = find(i), y = find(j);
            if(rank[x] > rank[y] ) {
                p[y] = x;
                size[x] += size[y];
                size[y] = size[x];
                

            }
            else{
                p[x] = y;
                size[y] += size[x];
                size[x] = size[y];
                if(rank[x] == rank[y]) rank[y] ++;
            }
        }
    }
    
    ll largestSet(){
        ll largest = 0;
        ll index = 0;
        for(int i = 0; i < size.size(); i++){
            if(size[i] > largest){
                index = i;
                largest = size[i];
            }

        }
        return index;
    }
};