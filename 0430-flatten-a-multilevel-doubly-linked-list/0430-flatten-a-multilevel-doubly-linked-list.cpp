/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;

        while (curr != NULL) {
            if (curr->child) {
                Node* next = curr->next;

                Node* childHead = flatten(curr->child);

                curr->next = childHead;
                childHead->prev = curr;
                curr->child = NULL;

                Node* tail = childHead;
                while (tail->next)
                    tail = tail->next;

                tail->next = next;
                if (next)
                    next->prev = tail;
            }

            curr = curr->next;
        }

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna