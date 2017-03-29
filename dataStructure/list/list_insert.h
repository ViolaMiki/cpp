#pragma once

template <typename T>
ListNodePosi(T) insertAsFirst(T const& e) {
    _size++;return header->insertAsPred(e);
}

template <typename T>
ListNodePosi(T) insertAsLast(T const& e) {
    _size++;return trailer->insertAsSucc(e);
}

template <typename T>
ListNodePosi(T) insertA(ListNodePosi(T) p, T const& e) {
    _size++;return p->insertAsSucc(e);
}

template <typename T>
ListNodePosi(T) insertB(ListNodePosi(T) p, T const& e) {
    _size++;return p->insertAsPred(e);
}
