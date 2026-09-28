/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // Base case: 0 or 1 node
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* first =head;
        ListNode* second = head->next;
        ListNode* prev = NULL;

        while(first != NULL && second != NULL){
            // Store the next pair's starting node
            ListNode* third = second->next;
            // Swap the current pair
            second->next = first;
            first->next = third;
            // Connect the previous pair to the newly swapped pair
            if(prev != NULL){
                prev->next = second;
            }else{
                // Update head for the first pair swap
                head = second;
            }
            // Move pointers forward for the next iteration
            prev = first;
            first = third;
            if(third != NULL){
                second = third->next;
            }
            else
             second = NULL;
        }
        return head;
    }
};