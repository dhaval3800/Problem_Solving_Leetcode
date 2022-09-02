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
        int cnt = 0;
        while(temp!=NULL){
            temp = temp->next;
            cnt++;
        }
        int mid = 0;
        if(cnt%2==0){
            mid =(cnt/2)+1;
        }
        
        else{
            mid = (cnt+1)/2;
        }
       
        temp = head;
        while(--mid){
            temp = temp->next;
        }
        return temp;
    }
};