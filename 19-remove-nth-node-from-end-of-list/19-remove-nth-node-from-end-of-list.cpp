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
    int getlength(ListNode* &head){
        int cnt = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head->next==NULL && n==1) return NULL;
        
        int x = getlength(head);
        int a = x-n;
        if(a==0){
            return head->next;
        }
        ListNode* ptr = head;
        while(--a){
            ptr = ptr->next;            
        }
        ptr->next = ptr->next->next;
        return head;
    }
};