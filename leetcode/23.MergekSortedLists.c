#include <stdlib.h> 

struct ListNode {
     int val;
     struct ListNode *next;
 };


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    struct ListNode* head = *lists,
        *preNode;

    if (listsSize < 2) return head;

    int* temp;
    int nullList = 0, minNode;

    while (nullList != listsSize) {
        for (int i = 0; i < listsSize; ++i) {
            if (lists[i] != NULL && (lists[i]->val < *temp || temp == NULL)) {
                *temp = lists[i]->val;
                minNode = i;
            }
        }
        if (minNode != 0) {
            struct ListNode* tNode = (struct ListNode *)malloc(sizeof(struct ListNode));
            tNode->val = lists[minNode]->val;
            tNode->next = lists[0];
            if (preNode == NULL) {
                preNode = tNode;
                head = preNode;
            } else preNode->next = tNode;
            preNode = preNode->next;
        } else {
            preNode = lists[0];
        }
        lists[minNode] = lists[minNode]->next;
        if (lists[minNode] == NULL) ++nullList;
        temp = NULL;
    }
    return head;
}
