// https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem

/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    Node* slow= head;
    Node* fast = head;
    while(slow && fast && fast->next){
        slow= slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return 1;
    }
    return 0;
}
