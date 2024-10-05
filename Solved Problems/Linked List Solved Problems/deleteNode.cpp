/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
    void deleteNode(ListNode* node) {
        node->val= node->next->val;
        ListNode* next_next= node->next->next;
        delete(node->next);

        node->next=next_next;
        
    }
};