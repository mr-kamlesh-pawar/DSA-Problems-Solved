#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0);
        ListNode* curr = head;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                curr->next = list1;
                list1 = list1->next;
            } else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }

        // If one of the lists is not yet exhausted, link the remaining nodes
        if (list1 != NULL) {
            curr->next = list1;
        } else {
            curr->next = list2;
        }

        return head->next;
    }
};

int main() {

    ListNode* list1 = new ListNode(1, new ListNode(3, new ListNode(5)));
    ListNode* list2 = new ListNode(2, new ListNode(4, new ListNode(6)));

    Solution solution;
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);


    while (mergedList != NULL) {
        cout << mergedList->val << " ";
        mergedList = mergedList->next;
    }

    return 0;
}
