// 21. Merge Two Sorted Lists
// Easy
// 17.9K
// 1.6K
// Companies
// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode res(0);
        ListNode *cur = &res;
        while(list1 && list2)
        {
            if (list1->val < list2->val)
            {
               cur->next = new ListNode(list1->val);
               list1 = list1->next;
            }
            else
            {
                cur->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            cur = cur->next;
        }
        cur->next = list1 ? list1 : list2;
        return (res.next);
    }
};