#include <iostream>
#include <cmath>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *res = new ListNode(0);
		ListNode *cur = res;
		int carry = 0;
		while (l1 || l2 || carry)
		{
			int sum = carry;
			if (l1)
			{
				sum += l1->val;
				l1 = l1->next;
			}
			if (l2)
			{
				sum += l2->val;
				l2 = l2->next;
			}
			cur->next = new ListNode (sum % 10);
			cur =  cur->next;
			carry = sum / 10;
		}
        return (res->next);
    }
};

int main(void)
{
	ListNode *head = new ListNode(2);
	head->next = new ListNode(4);
	head->next->next = new ListNode(9);
	head->next->next->next = nullptr;

	ListNode *head1 = new ListNode(5);
	head1->next = new ListNode(6);
	head1->next->next = new ListNode(4);
	head1->next->next->next = new ListNode(8);
	head1->next->next->next->next = nullptr;

	Solution num;
	ListNode *r = num.addTwoNumbers(head, head1);
	while(r)
	{
		cout << r->val << endl;
		r = r->next;
	}
	
	return (0);
}