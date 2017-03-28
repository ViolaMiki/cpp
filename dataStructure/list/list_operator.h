#pragma once

template <typename T>
T& List::operator[] (Rank r) const {
    ListNodePosi(T) p = first();
    while (0 < r--) p->succ;
    return p->data;
}
