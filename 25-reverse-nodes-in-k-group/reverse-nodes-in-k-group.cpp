class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* curr = head;
        ListNode* previousGroupTail = nullptr;
        ListNode* newHead = nullptr;

        while (curr != nullptr) {
            // Check whether k nodes are available
            ListNode* temp = curr;
            int count = 0;
            while (temp != nullptr && count < k) {
                temp = temp->next;
                count++;
            }
            // Less than k nodes -> leave them unchanged
            if (count < k)
                break;
            // Save the first node of this group.
            // After reversal, it becomes the tail.
            ListNode* groupTail = curr;
            // Reverse k nodes
            ListNode* prev = nullptr;
            for (int i = 0; i < k; i++) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            // prev = new head of reversed group
            // curr = first node of next group
            if (newHead == nullptr)
                newHead = prev;
            // Connect previous group to current reversed group
            if (previousGroupTail != nullptr)
                previousGroupTail->next = prev;
            // Current group's old head is now its tail
            previousGroupTail = groupTail;
        }
        // Connect last reversed group to remaining nodes
        if (previousGroupTail != nullptr)
            previousGroupTail->next = curr;
        return newHead;
    }
};