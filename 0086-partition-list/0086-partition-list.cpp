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
private:
   
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int>arr;
        ListNode * h=head;
        while(h){arr.push_back(h->val);h=h->next;}
        int n=arr.size();
        int j=0;
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            if(arr[i] < x){
                v1.push_back(arr[i]);
            }
            else v2.push_back(arr[i]);
        }
        for(auto i : v2)v1.push_back(i);
        h=head;
        for(auto i  : v1){
            h->val=i;h=h->next;
        }
        return head;
    }
};