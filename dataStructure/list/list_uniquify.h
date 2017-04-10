#pragma once

template <typename T>
int List<T>::uniquify() {
    if ( _size < 2 ) return 0;
    int oldSize = _size;
    ListNodePosi(T) p = first(); ListNodePosi(T) q;
    while (trailer != (q = p->succ)) 
        if  (p->data == q->data)  remove(q) ;
        else p = q;
   return oldSize - _size;
}

