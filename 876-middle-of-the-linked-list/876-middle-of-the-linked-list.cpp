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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int cnt=0 , i=0;
        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }
        temp = head;
        while(temp!=NULL){
            
            if(i==(cnt)/2){
                break;
            }
            i++;
            temp = temp->next;
        }
        return temp;
    }
};