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
    
    void insertAtTail(ListNode* &head, ListNode* &tail, int value){
        ListNode* temp = new ListNode(value);
        tail->next = temp;
        tail = temp;
        }
    
    ListNode* addition(ListNode* l1, ListNode* l2){

        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        
        int a =0,b=0;
        int c = 0;
        
        ListNode* zero = new ListNode(-1);
        ListNode* tail = zero;
        
        
        while(curr1!=NULL && curr2!=NULL){
            a = curr1->val + curr2->val + c;
            b = a%10;
            c = a/10;
            curr1 = curr1->next;
            curr2 = curr2->next;
            insertAtTail(zero,tail,b);
        }
        
        while(curr1!=NULL){
            a = curr1->val + c;
            b = a%10;
            c = a/10;
            curr1 = curr1->next;
            insertAtTail(zero,tail,b); 
        }
        
        while(curr2!=NULL){
            a = curr2->val + c;
            b = a%10;
            c = a/10;
            curr2 = curr2->next;
            insertAtTail(zero,tail,b); 
        }
        
        
        while(c!=0){
            a = c;
            b = a%10;
            c = a/10;
            insertAtTail(zero,tail,b); 
        }
        
        return zero->next;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* hehe = addition(l1,l2);
        return hehe;
    }
    
    
};