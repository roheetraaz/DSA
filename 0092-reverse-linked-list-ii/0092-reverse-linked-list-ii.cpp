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
        ListNode* reverseBetween(ListNode *head, int left, int right)
        {
            ListNode *nexti = NULL;
            ListNode *prev = NULL;
            ListNode *ans = new ListNode(0);
            ListNode *res = ans;
            int x = left;
            while (left - 1 && head != NULL)
            {
                ans->next = new ListNode(head->val);
                ans = ans->next;
                head = head->next;

                left--;
            }

            right = right - x + 1;
            while (head != NULL && right > 0)
            {
                nexti = head->next;
                head->next = prev;
                prev = head;
                head = nexti;
                right--;
            }
            ans->next = prev;
            while (ans->next != NULL)
            {
                ans = ans->next;
            }
            while (head != NULL)
            {
                ans->next = new ListNode(head->val);
                ans = ans->next;
                head = head->next;
            }
            return res->next;
        }
};