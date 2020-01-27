/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    if (head == NULL) return head;

    struct ListNode* next, *cur, *pre, *temp, *pcur;
    next = head;
    cur = head;
    pre = NULL;
    while (1) {
        for (int i = 0; i < k ; ++i) {
            if (next == NULL) return head;
            next = next->next;
        }

        for (int i = 0; i < k; ++i) {
            if (pre == NULL) {
                if (head == cur) {
                    pcur = cur; cur = cur->next;
                    continue; }
                pcur->next = cur->next;
                temp = head;
                head = cur;
                cur->next = temp;
            } else {
                if (pre->next == cur) { pcur = cur; cur = cur->next; continue; }
                temp = pre->next;
                pcur->next = cur->next;
                pre->next = cur;
                cur->next = temp;
            }

            cur = pcur->next;
        }
        pre = pcur;
        next = pcur->next;
    }
    return head;
}
