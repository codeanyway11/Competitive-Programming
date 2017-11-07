// https://www.hackerrank.com/challenges/compare-two-linked-lists/problem

/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  if(!headA && !headB){
      return true;
  }
  if((headA && !headB) || (!headA && headB)){
      return false;
  }
  while(headA && headB){
      if(headA->data != headB->data){
          return false;
      }
      headA= headA->next;
      headB= headB->next;
  }
    if(!headA && !headB){
      return true;
  }
    return false;

}
