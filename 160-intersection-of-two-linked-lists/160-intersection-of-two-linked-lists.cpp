/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * slow = headA;
        ListNode * fast = headB;
        while(slow!=fast){
            if(slow==NULL){
                slow = headA;
            }
            else
                slow = slow->next;
            
            if(fast==NULL){
                fast = headB;
            }
            else
                fast = fast->next;
        }
        return slow;
    }
};