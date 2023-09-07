/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* oddEvenList(ListNode *head)
        {
            ListNode *temp = head;
            ListNode *ans1 = new ListNode(0);
            ListNode *ans2 = new ListNode(0);
            ListNode *ans11 = ans1;
            ListNode *ans21 = ans2;
            ListNode *ans = new ListNode(0);
            ListNode *res = ans;
            if (head == NULL || head->next == NULL || head->next->next == NULL) return head;
            while (head != NULL && head->next != NULL)
            {
                ans1->next = new ListNode(head->val);
                ans1 = ans1->next;
                head = head->next->next;
            }
            if (head != NULL)
            {
                ans1->next = new ListNode(head->val);
                ans1 = ans1->next;
                head->next;
            }
            if (temp->next != NULL)
            {
                temp = temp->next;
            }

            while (temp != NULL && temp->next != NULL)
            {
                ans2->next = new ListNode(temp->val);

                ans2 = ans2->next;
                temp = temp->next->next;
            }
            if (temp != NULL)
            {
                ans2->next = new ListNode(temp->val);
                ans2 = ans2->next;
            }
            ans->next = ans11->next;
            while (ans->next != NULL)
            {
                ans = ans->next;
            }
            ans->next = ans21->next;
            return res->next;
        }
};