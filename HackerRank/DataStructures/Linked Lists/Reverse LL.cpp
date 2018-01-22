// https://www.hackerrank.com/challenges/reverse-a-linked-list

/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    if(!head || !head->next)
        return head;

    Node* prev = NULL;
    Node* curr = head;
    while(curr){
        Node* nextNext = curr->next;
        curr->next = prev;
        prev = curr;
        curr=nextNext;
    }
    return prev;
}
