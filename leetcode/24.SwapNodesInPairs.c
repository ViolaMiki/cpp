/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;

    struct ListNode* pre = NULL, *l1, *l2, *next;

    // 初始化
    l1 = head;
    l2 = head->next;
    next = l2->next;

    while (l1 != NULL && l2 != NULL) {
        l2->next = l1;
        l1->next = next;
        if (pre != NULL) pre->next = l2;
        else head = l2;
        pre = l1;
        l1 = next;
        if (next == NULL) break;
        l2 = next->next;
        if (l2 == NULL) break;
        next = l2->next;
    }
    return head;
}
