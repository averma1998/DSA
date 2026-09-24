class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* curr = head;
        while (curr != nullptr) {
            while (!st.empty() && st.top()->val < curr->val) {
                st.pop();
            }
            st.push(curr);
            curr = curr->next;
        }
        //Re-link the remaining nodes from right to left
        ListNode* nxt = nullptr;
        while (!st.empty()) {
            curr = st.top();
            st.pop();
            curr->next = nxt;
            nxt = curr;
        }
        return nxt;
    }
};
