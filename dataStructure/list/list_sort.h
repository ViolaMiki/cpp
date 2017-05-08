#pragma once 
#include <iostream>
using namespace std;
template <typename T>
void List<T>::sort(ListNodePosi(T) p, int n) {
    switch (rand() % 3) {
        case 1: insertionSort(p, n); break;
        case 2: selectionSort(p, n); break;
        default: mergeSort(p, n); break;
    }
}

template <typename T>
void insertionSort(ListNodePosi(T) p, int n) {
     for(int i = 0; i < n; i++) {
        insertA( find(p->data, n, p), p->data );
        p = p->succ; remove(p->pred);
     }
}

template <typename T> 
    void selectSort(ListNodePosi(T) p, int n) {
        ListNodePosi(T) head = p->pred;ListNodePosi(T) tail = p;
    for(int i=0; i < n; i++) tail = tail->succ;
    while(1 < n) {
        ListNodePosi(T) max = selectMax(head->succ, n);
        if (max) {
            insertB(tail, remove(max));
            tail = tail->pred;n--;
        }
    }
}

template <typename T>
ListNodePosi(T)  selectMax(ListNodePosi(T) p, int n) {
    ListNodePosi(T) max = p;
    for(ListNodePosi(T) cur = p; 1 < n; n++) {
        if (!lt((cur = cur->succ)->data, max->data)) 
            max = cur;
    }
    return max;
}

template <typename T>
void mergeSort(ListNodePosi(T) & p, int n) {
    if (n < 2) return;
    int m = n; 
}

template <typename T>
void List<T>::merge(ListNodePosi(T) p, int n, List<T> & L, ListNodePosi(T) q, int m) {
    ListNodePosi(T) pp = p->pred;
    while (m > 0) {
        if ( (n > 0) && (p->data <= q->data)) {
            if (q == (p = p->succ)) ; n--;
        } else {
            insertB(p, q->data); q = q->succ; m--;
        }
    }
    p = pp->succ;
}

template <typename T>
void List<T> mergeSort(ListNodePosi(T) & p, int n) {
    if (n < 2) return;
    int m = n >> 1;
    ListNodePosi(T) q = p;
    for (int i = 0; i < m; ++i) q = q->succ;
    mergeSort(p, m); mergeSort(q, n - m);
    merge(p, m, *this, p, n - m);
}
