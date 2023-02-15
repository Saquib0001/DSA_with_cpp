//Program to Reverse a Linked List
#include<iostream>
using namespace std;
 struct Node {
    int data;
    struct Node *next;
};
 
// We construct a linked list and use this function to push elements to the list 
void push(struct Node **head, int data) 
{
    struct Node *Node;
    Node = (struct Node*)malloc(sizeof(struct Node));
    Node->data = data;
    Node->next = (*head);
    (*head) = Node;
}
 
// Function to reverse the list
void reverse(struct Node **head) 
{
    struct Node *temp = NULL;
    struct Node *prev = NULL;
    struct Node *current = (*head);
    while(current != NULL) 
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head) = prev;
}

 
void display(struct Node *head) 
{
    while(head != NULL) 
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main() 
{
    struct Node *head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    cout << "Original Linked List" << endl;
    display(head);
    
    reverse(&head);
    cout << endl;
    cout << "Reversed Linked List"<<endl;
    display(head);
 
 return 0;
}