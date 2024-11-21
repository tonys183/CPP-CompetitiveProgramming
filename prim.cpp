// Arbol de recubrimiento minimo (MST), punto A para todos los otros
// Empiezo por cualquier nodo, nlogE
// Mayor densidad de aristas
void adyacentes(int x) {
    visi[x] = 1;
    for (auto &[i, j] : AL[x])
        if (!visi[i]) pq.push({-j, -i});
}

void prim(){
    visi.assign(a+1, 0);
    adyacentes(1);
    while (!pq.empty()) {
        auto [i, j] = pq.top(); pq.pop();
        i = -i; j = -j;
        if (visi[j]) continue;
        costo += i;
        adyacentes(j);
        contVerti++;
        if (contVerti == a-1) break;
    }
}