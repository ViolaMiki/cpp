#pragma once

template <typename T>
Vector<T>& Vector<T>::operator= ( Vector<T> const& V ) {
    if ( _elem ) delete [] _elem;
    copyFrom (V._elem, 0, V.size());
    return *this;
}

template <typename T>
T& Vector<T>::operator[] ( Rank R ) const
{ return _elem[R]; }

