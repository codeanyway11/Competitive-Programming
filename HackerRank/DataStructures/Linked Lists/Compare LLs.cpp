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

bool CompareLists(Node* a, Node* b)
{
    while(a && b){
        if(a->data != b->data){
            return false;
        }
        a = a->next;
        b = b->next;
    }
    return (a == NULL && b == NULL);
}
