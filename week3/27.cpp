 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
         ListNode *left = head, *right = head;
        ListNode *first = nullptr, *second = nullptr;
        for (k; k > 1; --k)
            right = right->next;
        first = right;

        while (right->next){
            left = left->next;
            right = right->next;
        }
        second = left;
        k = first->val;
        first->val = second->val;
        second->val = k;
        return head;
    }
};
