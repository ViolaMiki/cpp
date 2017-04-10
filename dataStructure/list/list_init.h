#pragma once

template <typename T> 
void List<T>::init() {
    header = new ListNode<T>;
    trailer = new ListNode<T>;
    header->succ = trailer; header->pred = NULL;
    trailer->pred = header; trailer->succ = NULL;
    _size = 0;
}

template <typename T>
List<T>::List(List<T> const& L) {
    copyNodes(L.first(), L._size);    
}

template <typename T>
List<T>::List(List<T> const& L, Rank r, int n) {
    copyNodes(L[r], n);
}

template <typename T>
List<T>::List(ListNodePosi(T) p, int n) {
    copyNodes(p, n);
}
