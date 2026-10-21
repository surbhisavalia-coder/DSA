class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int mid = 0;
        int count = 0;
        ListNode* temp = head;

        while(temp != nullptr){
            count++;
            temp=temp->next;
        }
        mid = count / 2;
        ListNode* temp2 = head;
        while(temp2){
            if(mid == 0) return temp2;
            mid--;
            temp2 = temp2->next;
        }
        return head;
    }
};