class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Detect karo cycle 
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Find the entry point
                slow = head;
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                std::cout << "tail connects to node index " << slow->val << std::endl;
                return slow;
            }
        }
        std::cout << "No cycle found" << std::endl;
        return nullptr;
    }
};
