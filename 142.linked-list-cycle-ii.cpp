/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool cycle = false;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                cycle = true;
                break;
            }
        }
        if (!cycle) {
                return (std::cout << "No cycle found" << std::endl, nullptr);
            }
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
        return (std::cout << "tail connects to node index " << slow->val << std::endl,
                slow);
    }
};
// @lc code=end

