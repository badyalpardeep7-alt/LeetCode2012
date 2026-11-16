
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != NULL) {

            // Check whether current value is duplicated
            if (curr->next != NULL &&
                curr->val == curr->next->val) {

                int duplicate = curr->val;

                // Skip all nodes having this value
                while (curr != NULL && curr->val == duplicate) {
                    curr = curr->next;
                }

                prev->next = curr;
            }
            else {
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};
