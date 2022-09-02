/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Using Map

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         map<ListNode* , bool> visited;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             if(visited[temp]==true){
//                 return true;
//             }
//             else{
//                 visited[temp]= true;
//             }
//             temp = temp->next;
//         }
//         return false;
//     }
// };


//Using Floyd Cycle detection

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return 0;

        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) return 1;
        }
        return 0;
    }
};
