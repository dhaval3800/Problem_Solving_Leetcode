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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        
        ListNode* curr = head;
        while(curr->next != NULL){
            if(curr->val==curr->next->val){
                ListNode* forward = curr->next->next;
                ListNode* Nodetodelete = curr->next;
                delete(Nodetodelete);
                curr->next = forward;
            }
            else
                curr = curr->next;
        }
        return head;
    }
};