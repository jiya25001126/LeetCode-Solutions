/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *curr=head;
    while(curr != NULL && curr->next!=NULL){
        if(curr->val == curr->next->val){
        struct ListNode *temp = curr->next;
        curr->next = curr->next->next;
        free(temp);
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna