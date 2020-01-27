/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *rel = NULL, *head = (struct ListNode* ) malloc(sizeof(struct ListNode));
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    while (l1 != NULL && l2 != NULL) {
        struct ListNode* temp = (struct ListNode* ) malloc(sizeof(struct ListNode));
        if (l1->val <= l2->val) {
            temp->val = l1->val;
            l1 = l1->next;
        } else {
            temp->val = l2->val;
            l2 = l2->next;
        }
        temp->next = NULL;
        if (rel == NULL) {
            rel = (struct ListNode* ) malloc(sizeof(struct ListNode));
            rel = temp;
            head = temp;
        }
        else { rel->next = temp; rel = rel->next; }
    }

    if (l1 == NULL) rel->next = l2;
    if (l2 == NULL) rel->next = l1;
    return head;
}
