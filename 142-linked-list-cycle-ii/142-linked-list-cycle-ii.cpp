/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//floyd cycle detection (t(c)=O(n) & s(c)= O(1)) 

// class Solution {
// public:
    
//     ListNode *detectCycle(ListNode *head) {
//         if(head==NULL) return NULL;
        
//         ListNode* intersection = hasCycle(head);
//         if(intersection==NULL) return NULL;
//         ListNode* slow = head;
//         int cnt = -1;
//         while(slow!=intersection){
//             slow = slow->next;
//             intersection = intersection->next;
//             cnt++;
//         }
//         return slow;
//     }
    
    
//     ListNode* hasCycle(ListNode *head) {
//         if(head==NULL) return NULL;
        
//         ListNode* slow = head;
//         ListNode* fast = head;
        
//         while(fast!=NULL && slow!=NULL){
//             slow = slow->next;
//             fast = fast->next;
//             if(fast!=NULL){
//                 fast = fast->next;
//             }
//             if(slow==fast) return slow;
//         }
//         return NULL;
//     }
    
// };



//using Map (t(c)=O(n) & s(c)= O(n)) 

class Solution {
public:
    
    ListNode* detectCycle(ListNode *head) {
        map<ListNode* , bool> visited;
        ListNode* temp = head;
        while(temp!=NULL){
            if(visited[temp]==true){
                return temp;
            }
            else{
                visited[temp]= true;
            }
            temp = temp->next;
        }
        return NULL;
    }
};

