// https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem

/*
  Merge two sorted lists A and B as one linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{

    if(!headB){
        return headA;
    }
    if(!headA){
        return headB;
    }

    Node* result = NULL;
    if(headA->data <headB->data){
        result = headA;
        result->next = MergeLists(headA->next, headB);
    }
    else{
        result = headB;
        result->next = MergeLists(headA, headB->next);
    }
    return result;
}
