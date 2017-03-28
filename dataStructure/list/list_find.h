#pragma once

ListNodePosi(T) find (T const& e, int n, ListNodePosi(T) p) const {
    while (n-- > 0) 
        if (e == (p = p->pred)->data) return p;
    return NULL;
}
