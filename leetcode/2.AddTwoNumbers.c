/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *l, *pre, *resultList;
    int temp = 0, val, val1, val2;
    l = (struct ListNode *)malloc(sizeof(struct ListNode));
    l->next = NULL;
    resultList = l;
    while(l1 != NULL || l2 != NULL) {
        val1 = l1 != NULL ? l1->val : 0;
        val2 = l2 != NULL ? l2->val : 0;
        val = val1 + val2;
        l->val = (val + temp) % 10;
        temp = (val + temp) / 10;
        l->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        pre = l;
        l = l->next;
        l1 = l1 != NULL ? l1->next : l1;
        l2 = l2 != NULL ? l2->next : l2;
    }
    if (temp > 0) {
        l->val = temp;
        l->next = NULL;
    } else pre->next = NULL;
    l->next = NULL;
    return resultList;
}
