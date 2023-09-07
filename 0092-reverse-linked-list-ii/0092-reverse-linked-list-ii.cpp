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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     vector<int>v;
     ListNode* temp=new ListNode(0);
     ListNode* temp2=temp;
     while(head!=NULL){
         v.push_back(head->val);
         head=head->next;
     }   
     reverse(v.begin()+left-1,v.begin()+right);
     for(auto i : v){
         temp->next=new ListNode(i);
         temp=temp->next;
     }
     
     
     return temp2->next;
    }
};