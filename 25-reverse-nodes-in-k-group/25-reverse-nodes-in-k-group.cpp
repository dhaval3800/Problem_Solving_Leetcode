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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL){
            return NULL;
        }
            
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next1 = NULL;
        int cnt = 0;
        
        //revrse k nodes
        while(curr!=NULL && cnt<k){
            next1 = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next1;
            cnt++;
        }
            
        //recursion
        ListNode* hehe = next1;
        int a = 0;
        while(hehe!=NULL){
            hehe = hehe->next;
            a++;
        }
        
        if(a<k){
            head->next = next1;
            return prev;
        }
        
        if(next1 != NULL){
            head->next = reverseKGroup(next1,k);
        }
        
        return prev;
        
    }
};