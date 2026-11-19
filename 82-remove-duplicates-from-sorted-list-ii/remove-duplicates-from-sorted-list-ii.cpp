class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {
            if (temp->val == temp->next->val) {

                // Skip all duplicate nodes
                while (temp->next != NULL &&
                       temp->val == temp->next->val) {
                    temp = temp->next;
                }

                temp = temp->next;
                prev->next = temp;

            } else {
                prev = prev->next;
                temp = temp->next;
            }
        }

        return dummy->next;
    }
};

