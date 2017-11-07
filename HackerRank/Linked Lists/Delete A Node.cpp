// https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem

/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  int count = 0;
    if(!head){
        return head;
    }
    Node* temp = head;
    if(position == count){
        temp = head->next;
        free(head);
        head = temp;
        return head;
    }else{
        while(temp && count <position -1){
            temp = temp->next;
            count++;
        }
        if(!temp->next)
            return head;
        Node *tempor = temp->next->next;
        free(temp->next);
        temp->next= tempor;
        return head;
    }
}
