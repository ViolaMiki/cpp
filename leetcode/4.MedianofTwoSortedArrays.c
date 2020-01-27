double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double rel = 0;
    
    if (nums1Size == 0 && nums2Size == 0) return rel;

    int median = (nums1Size + nums2Size) / 2 + 1, single = (nums1Size + nums2Size) % 2,
        i1 = 0, i2 = 0, temp = 0;

    for (int i = 0; i < median; ++i) {
        if (i1 < nums1Size && i2 < nums2Size) {
            if (nums1[i1] < nums2[i2]) { temp = nums1[i1++]; }
            else { temp = nums2[i2++]; }
        } else if (i1 >= nums1Size ) {
            temp = nums2[i2++];
        } else {
            temp = nums1[i1++];
        }
        
        if (single == 0 && i == (median - 2)) rel = temp;
        else if (i == (median - 1)) rel += temp;
    }

    if (single == 0) return rel / 2;
    return rel;
}
