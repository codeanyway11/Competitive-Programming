// https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem

/*
    Insert Node in a doubly sorted linked list
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *temp,int data)
{
    Node* head = temp;
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if(!head || head->data>data){
        newNode->next = head;
        return newNode;
    }
    else{
        while(head && head->next && head->next->data <data){
            head = head->next;
        }
        newNode->next = head->next;
        head->next = newNode;
    }
    return temp;
}
