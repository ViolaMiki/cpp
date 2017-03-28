#pragma once
template <typename T> int Vector<T>::disordered() const {
    int n = 0;
    for (int i = 0; i < _size - 1; ++i) 
        if (_elem[i] > _elem[i + 1]) ++n;
    return n;
}
