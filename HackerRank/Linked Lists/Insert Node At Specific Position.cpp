// https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem

/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  int count = 0;
    Node* temp = head;
    Node* newNode = new Node();
    newNode->data = data;
    if(count == position){
        newNode->next = head;
        return newNode;
    }
    else{
        while( temp && count<position -1){
            count++;
            temp= temp->next;
        }
        if(!temp){
            return head;
        }
         newNode->next = temp->next;
        temp->next = newNode;
        return head;

    }
}
