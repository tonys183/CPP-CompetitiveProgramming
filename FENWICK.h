#include <bits/stdc++.h>
using namespace std;

struct IntegerAddition {
    int apply(int a, int b) { return a + b; }
    int undo(int c, int b) { return c - b; }
};

template <typename T>
class FenwickTree {
private:
    vector<T> tree;
    IntegerAddition f;

public:
    FenwickTree(vector<T>& ar){
        tree = ar;
        int size = tree.size();

        for (int i = 1; i < size; i++) {
            int p = i + (i & -i);
            if (p < size) {
                tree[p] = f.apply(tree[p], tree[i]);
            }
        }
    }

    T query(int i){
        T q = 0;
        while (i > 0) {
            q = f.apply(q, tree[i]);
            i -= i & -i;
        }
        return q;
    }

    T query(int i, int j){
        if (i > 1) {
            return f.undo(query(j), query(i - 1));
        } else {
            return query(j);
        }
    }

    T valueAt(int i){
        return f.undo(query(i), query(i - 1));
    }

    void apply(int i, T k){
        int size = tree.size();
        while (i < size) {
            tree[i] = f.apply(tree[i], k);
            i += i & -i;
        }
    }

    void update(int i, T value){
        T orig = valueAt(i);
        apply(i, f.undo(value, orig));
    }
};