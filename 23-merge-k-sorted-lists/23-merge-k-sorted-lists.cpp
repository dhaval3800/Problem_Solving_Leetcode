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
// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         if (lists.size() == 0) return NULL;
        
//         ListNode* head = lists[0];
        
//         for (int i = 1; i < lists.size(); i++)
//             head = mergeTwoLists(head, lists[i]);
        
//         return head;
//     }
    
// //======================================================================//
    
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(list1==NULL) return list2;
//         if(list2==NULL) return list1;
        
        
//         if(list1->val <= list2->val){
//             return solve(list1, list2);
//         }
//         else{
//             return solve(list2,list1);
//         }
//     }
    
// //======================================================================//
    
//     ListNode* solve(ListNode* list1 , ListNode* list2){
        
//         ListNode* temp1 = list1;
//         ListNode* temp2 = list2;
//         ListNode* next1 = temp1->next;
//         ListNode* next2 = temp2->next;
        
//         if(next1==NULL && temp2!=NULL ){
//             temp1->next = temp2;
//             return list1;
//         }
        
//         while(next1!= NULL && temp2!=NULL){
            
//             if((temp1->val <= temp2->val) && (temp2->val <=next1->val) ){
//                 temp1->next = temp2;
//                 next2 = temp2->next;
//                 temp2->next = next1;   
                
//                 temp1 = temp2;
//                 temp2 = next2;  
//             }
            
//             else {
//                 temp1 = next1;
//                 next1 = next1->next;
                
//                 if(next1==NULL){
//                     temp1->next = temp2;
//                     return list1;
//                 }
//             }
            
//         }
//         return list1;
//     }
// };



class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int, int> nodes;
        
        for(int i =0; i<lists.size(); i++){
            ListNode* node = lists[i];
            while(node){
                nodes[node->val]++;
                node = node->next;
            }
        }
        
        ListNode* dummyNode = new ListNode(-1);
        ListNode* tail = dummyNode;
        
        for(auto a:nodes){
            while(a.second!=0){
                ListNode* newNode = new ListNode(a.first);
                tail->next = newNode;
                tail = tail->next;
                a.second--;
            }
        }
        return dummyNode->next;
    }
        
};