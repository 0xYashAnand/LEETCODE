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
    ListNode* partition(ListNode* head, int x) {
        vector<int> v, v2;
        ListNode *temp =head;
        while(temp!=NULL){
            int a = temp->val;
            temp = temp->next;
            if(a<x) v.emplace_back(a);
            else v2.emplace_back(a);
            
        }
        temp = head;
        int i=0, j=0;
        while(i<v.size() || j<v2.size()){
            if(i<v.size()){
                temp->val = v[i];
                temp = temp->next;
            }
            else{
                temp->val = v2[j];
                temp = temp->next;
                j++;
            }
            i++;
        }
        return head;
    }
};