/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* front = head;
    struct ListNode* back = head;
    for (int i = 0; i < n; ++i) {
        front = head->next;
    }
    while (front->next != null) {
        front = front->next;
        back = back->next;
    }
    back->next = back->next->next;
    return head;
}
