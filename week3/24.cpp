class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    if(!head) return nullptr;
      //duplicate flag
        bool duplicate = false;
        while(head->next && head->val == head->next->val) {
            duplicate = true;
            head->next = head->next->next;
        }
        head->next = deleteDuplicates(head->next);
      //if head is not a distinc element
        return(duplicate ? head->next : head);
    }
  
};
