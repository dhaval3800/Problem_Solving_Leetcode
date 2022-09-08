/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    
    void insertAtTail(Node* &head, Node* &tail, int data){
        Node* newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    
    Node* copyRandomList(Node* head) {
        Node* temp =  head;
        
    //step 1: create clone linkedlist with only next pointers
        
        Node* clonehead = NULL;
        Node* clonetail = NULL;
        
        while(temp!=NULL){
            insertAtTail(clonehead, clonetail,temp->val);
            temp = temp->next;
        }      
        
    //step 2: create a map
        
        map<Node* , Node*> mapping;
        temp = head;
        Node* clonenode = clonehead;
        while(temp!=NULL && clonenode!=NULL){
            mapping[temp] = clonenode;
            temp = temp->next;
            clonenode = clonenode->next;
        }
        
        temp = head;
        clonenode = clonehead;
        
    //step 3: set the random pointers
        
        while(temp!=NULL){
            clonenode->random = mapping[temp->random];
            temp = temp->next;
            clonenode = clonenode->next;
        }
        
        return clonehead;
    }
};

