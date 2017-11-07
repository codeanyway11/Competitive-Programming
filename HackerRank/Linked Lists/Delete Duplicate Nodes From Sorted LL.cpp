// https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem

/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *temp)
{
    Node* head = temp;
    if(!head || !head->next)
        return temp;

    while(head && head->next){
        if(head->data == head->next->data){
            Node* temp2 = head->next->next;
            free(head->next);
            head->next = temp2;
        }
        else{
            head = head->next;
        }
    }

    return temp;
}
