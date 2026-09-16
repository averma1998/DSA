class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* beforeLeft = nullptr;
        ListNode* next;
        int pos = 1;
        // Reach left
        while (pos < left) {
            beforeLeft = curr;
            curr = curr->next;
            pos++;
        }
        ListNode* leftNode = curr;        // Remember original left node
        while (pos <= right) {         // Reverse
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            pos++;
        }
        if (beforeLeft != nullptr) {        // Connect left side
            beforeLeft->next = prev;
        }
        else {
            head = prev;
        }
        leftNode->next = curr;        // Connect right
        return head;
    }
};