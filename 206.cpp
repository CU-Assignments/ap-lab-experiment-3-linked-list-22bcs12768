class Solution {
public:
    ListNode* reverseList(ListNode* head) {
  
        if(head == NULL || head->next == NULL)  return head;

        ListNode* prev = head;
        // Initialize curr pointer as the next pointer of prev...
        ListNode* curr = prev->next;
        // Initialize next of head pointer as NULL...
        head->next = NULL;
        // Run a loop till curr and prev points to NULL...
        while(prev != NULL && curr != NULL){
            // Initialize next pointer as the next pointer of curr...
            ListNode* next = curr->next;
            // Now assign the prev pointer to curr’s next pointer.
            curr->next = prev;
            // Assign curr to prev, next to curr...
            prev = curr;
            curr = next;
        }
        return prev;    // Return the prev pointer to get the reverse linked list...
    }
};
// output
// Input
// head =
// [1,2,3,4,5]
// Output
// [5,4,3,2,1]
// Expected
// [5,4,3,2,1]
