// https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem

/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int pos)
{
  int count = 0;
    Node* main = head;
    Node* ref= head;
    if(pos == count){
        while(ref->next!=NULL){
            main= main->next;
            ref= ref->next;
        }
        return main->data;
    }
    else{
        while(ref && count <pos ){
            count++;
            ref=ref->next;
        }
        while(ref->next!=NULL){
            main= main->next;
            ref= ref->next;
        }
        return main->data;
    }
}
