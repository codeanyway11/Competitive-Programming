// https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem

/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if(!head){
        return newNode;
    }
    else{
       Node* last = head;
        while(last->next!=NULL){
            last = last->next;
        }
        last->next = newNode;
    }
    return head;

}
