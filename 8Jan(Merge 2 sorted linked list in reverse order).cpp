//Problem: https://www.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1

struct Node*reverse(struct Node* node){
        struct Node*prev=nullptr;
        while(node){
            struct Node*next=node->next;
            node->next=prev;
            prev=node;
            node=next;
        }
        return prev;
    }
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        node1=reverse(node1);
        node2=reverse(node2);
        
        struct Node*newHead=nullptr;
        struct Node*curNode=nullptr;
        
        while(node1 and node2){
            if(node1->data>node2->data){
                if(curNode==nullptr){
                    curNode=new Node;
                    curNode->data=node1->data;
                    newHead=curNode;
                }
                else{
                    struct Node*newNode=new Node;
                    newNode->data=node1->data;
                    curNode->next=newNode;
                    curNode=newNode;
                }
                node1=node1->next;
            }
            else{
                if(curNode==nullptr){
                    curNode=new Node;
                    curNode->data=node2->data;
                    newHead=curNode;
                }
                else{
                    struct Node*newNode=new Node;
                    newNode->data=node2->data;
                    curNode->next=newNode;
                    curNode=newNode;
                }
                node2=node2->next;
            }
        }
        while(node1){
             if(curNode==nullptr){
                    curNode=new Node;
                    curNode->data=node1->data;
                    newHead=curNode;
                }
                else{
                    struct Node*newNode=new Node;
                    newNode->data=node1->data;
                    curNode->next=newNode;
                    curNode=newNode;
                }
                node1=node1->next;
        }
        while(node2){
            if(curNode==nullptr){
                    curNode=new Node;
                    curNode->data=node2->data;
                    newHead=curNode;
                }
                else{
                    struct Node*newNode=new Node;
                    newNode->data=node2->data;
                    curNode->next=newNode;
                    curNode=newNode;
                }
                node2=node2->next;
        }
        return newHead;
    }  
