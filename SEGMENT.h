#include <bits/stdc++.h>
using namespace std;

template <typename T>
class SegmentTree {
private:
    vector<T> tree;
    int n;
    function<T(T, T)> f;
    bool maxi;

public:
    SegmentTree(vector<T>& ar, function<T(T, T)> func, bool pMaxi){
        n = ar.size();
        tree.resize(2 * n);
        f = func;
        maxi = pMaxi;
        
        for (int i = 0; i < n; i++) tree[n + i] = ar[i];

        for (int i = n - 1; i > 0; i--) {
            tree[i] = f(tree[2 * i], tree[2 * i + 1]);
        }
    }

    void update(int i, T value){
        i += n-1;
        tree[i] = value;
        while (i > 1) {
            i >>= 1;
            T newValue = f(tree[2 * i], tree[2 * i + 1]);
            
            if (newValue != tree[i]) tree[i] = newValue;
            else return;
        }
    }

    T query(int from, int to){
        from += n-1;
        to += n;
        T q = maxi ? -2147483647 : 2147483647;

        while (from < to) {
            q = (from & 1) ? f(q, tree[from++]) : q;
            q = (to & 1) ? f(q, tree[--to]) : q;
            from >>= 1;
            to >>= 1;
        }
        return q;
    }
};