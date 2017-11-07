// https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list

/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    Node* curr = head;
    Node* newHead = NULL;
    if(!head || !head->next)
    {
        return head;
    }

    while(curr){
        Node* temp = curr->next;
        curr->next = curr->prev;
        curr->prev= temp;
        newHead = curr;
        curr = curr->prev;
    }
    return newHead;
}
