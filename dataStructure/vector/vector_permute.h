#pragma once

template <typename T>
void Vector<T>::permute ( Vector<T>& V ) {
    for ( int i = V.size; i > 0; --i )
        swap ( V[i - 1], V[rand() % i]);
}

