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
        n = ar.size(); // input array length
        tree.resize(2 * n);
        f = func;
        maxi = pMaxi;

        // store into the right end of the array
        for (int i = 0; i < n; i++) tree[n + i] = ar[i];

        for (int i = n - 1; i > 0; i--) {
            tree[i] = f(tree[2 * i], tree[2 * i + 1]);
        }
    }

    void update(int i, T value){
        i += n-1;
        tree[i] = value;
        while (i > 1) {
            i >>= 1; // shift right is the same as divide by 2
            T newValue = f(tree[2 * i], tree[2 * i + 1]);
            
            if (newValue != tree[i]) tree[i] = newValue;
            else return; // since no update is made
        }
    }

    T query(int from, int to){
        from += n-1; // go to second half of the array
        to += n;
        T q = maxi ? -2147483647 : 2147483647;

        while (from < to) {
            q = (from & 1) ? f(q, tree[from++]) : q; // 'from' is odd, so it is the right child of its parent, then interval includes node 'from' but doesn't include its parent
            q = (to & 1) ? f(q, tree[--to]) : q; // 'to' is odd, so it's the right child of its parent, then might as well use the parent
            from >>= 1; // shift right is the same as divide by 2 but a little faster
            to >>= 1;
        }
        return q;
    }
};
