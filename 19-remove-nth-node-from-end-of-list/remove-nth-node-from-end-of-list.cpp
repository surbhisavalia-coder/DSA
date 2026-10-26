class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current = head;
        ListNode* fast = head;

        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        if (fast == NULL) {
            return head->next;
        }

        while (fast->next != NULL) {
            current = current->next;
            fast = fast->next;
        }

        current->next = current->next->next;

        return head;
    }
};

