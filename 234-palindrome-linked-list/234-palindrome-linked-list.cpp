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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        
        if(head->next->next==NULL){
            if(head->val!=head->next->val){
                return false;
            }
        }
        
        //step1
        ListNode* mid = getmid(head);
        
        //step 2 reverse mmid->next part
        ListNode* temp = mid->next;
        mid->next = reverse(temp);
        
        //step 3 compare both values
        ListNode* head1 = head;
        ListNode* head2 = mid->next; 
        
        while(head2!=NULL && head1!=NULL){
            if(head1->val!=head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        // repeat step 2
        temp = mid->next;
        mid->next = reverse(temp);
        
        return true;
    }
    
    //--------------------------------------------------------
    
    ListNode* getmid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=NULL  && fast->next != NULL){
            fast = fast->next;
            if(fast->next !=  NULL) {
               fast = fast->next; 
            }
            else{
                return slow;
            }
            
            slow = slow->next;
        }
        return slow;
    }
    
    //--------------------------------------------------------
    
    ListNode* reverse(ListNode* head){
        ListNode* forward = NULL;
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(curr!=NULL){
            
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
};