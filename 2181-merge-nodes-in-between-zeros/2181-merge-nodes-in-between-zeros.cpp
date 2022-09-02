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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * temp = head;
        ListNode * newhead = NULL;
        ListNode * tail = NULL;
        int sum=0;
        while(temp!=NULL){
            if(temp->val!=0){
              sum+=temp->val;
            }
            else if(sum!=0){
              ListNode *newnode = new ListNode(sum);
              if(newhead==NULL) {
                   newhead = newnode;
                   tail = newnode;
              }
              else {
                   tail->next=newnode;
                   tail = tail->next;
                   // tail = newnode;
              }
              sum=0;
            }
            temp = temp->next;
        }
        return newhead;
    }
};
