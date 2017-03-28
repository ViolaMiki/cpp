#pragma once
#include <iostream>
#include "../fibonacci/fib.h"
using namespace std;
template <typename T>
Rank Vector<T>::search(T const& e, Rank lo, Rank hi) const {
    return (rand() % 2) ?
        binSearch( _elem, e, lo, hi) : fibSearch(_elem, e, lo, hi);
}

template <typename T> 
static Rank binSearch( T* A, T const& e, Rank lo, Rank hi) {
    while (lo < hi) {
        Rank mi = (lo + hi) >> 1;
        (A[mi] > e) ? hi = mi : lo = mi + 1;
    }
    return --lo;
}

template <typename T>
static Rank fibSearch ( T *A, T const& e, Rank lo, Rank hi) {
    Fib fib(hi - lo);
    while (lo < hi) {
        while (hi - lo < fib.get()) fib.prev();
        Rank mi = lo + fib.get() - 1;
        if (e < A[mi]) lo = mi;
        else if (e > A[mi]) hi = mi;
        else return mi;
    }
    return -1;
}
