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
    vector<int> addition(ListNode* l1, ListNode* l2){
        vector<int> ans;
        
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        int a =0,b=0;
        int c = 0;
        
        while(curr1!=NULL && curr2!=NULL){
            a = curr1->val + curr2->val + c;
            b = a%10;
            c = a/10;
            curr1 = curr1->next;
            curr2 = curr2->next;
            ans.push_back(b); 
        }
        
        while(curr1!=NULL){
            a = curr1->val + c;
            b = a%10;
            c = a/10;
            curr1 = curr1->next;
            ans.push_back(b); 
        }
        
        while(curr2!=NULL){
            a = curr2->val + c;
            b = a%10;
            c = a/10;
            curr2 = curr2->next;
            ans.push_back(b); 
        }
        
        
        while(c!=0){
            a = c;
            b = a%10;
            c = a/10;
            ans.push_back(b); 
        }
        
        return ans;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> hehe;
        hehe = addition(l1,l2);
        for(int i = 0; i<hehe.size(); i++){
            cout << hehe[i];
        }
        
        ListNode* zero = new ListNode(-1);
        ListNode* next1 = zero;
        for(int i = 0; i<hehe.size(); i++){
            ListNode* temp = new ListNode(hehe[i]);
            next1->next = temp;
            next1 = temp;
        }
        return zero->next;
    }
};