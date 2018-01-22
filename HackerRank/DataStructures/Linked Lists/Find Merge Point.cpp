// https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem

/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int length(Node* head){
    if(!head){
        return 0;
    }
    return 1+ length(head->next);
}

int FindMergeNode(Node *headA, Node *headB)
{

    int a = length(headA);
    int b = length(headB);
    if(a>b){
         int count =0;
        while(headA && count<a-b){
           headA= headA->next;
            count++;
        }
    }
    else{
         int count =0;
        while(headB && count<b-a){
            headB = headB->next;
            count++;
        }
    }

    while(headA && headB){
        if(headA == headB){
            return headA->data;
        }
        else{
            headA = headA->next;
            headB= headB->next;
        }
    }
    return -1;
}
