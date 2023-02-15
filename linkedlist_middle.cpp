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
 

//To find middle of a Linked List
 void print_Middle(struct Node *head)
{
  struct Node *temp = head;
  struct Node *temp1 = head;

  if (head != NULL)
    {
      while (temp1 != NULL && temp1->next != NULL)
	{
	  temp1 = temp1->next->next;
	  temp = temp->next;
	}
        cout<<"\nThe middle element in the linked list is : "<<temp->data;
    }
}

// To display program in Screen 
void display(struct Node *head) 
{
    while(head != NULL) 
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
 // Driver function
int main() 
{
    struct Node *head = NULL;
    push(&head, 8);
    push(&head, 9);
    push(&head, 3);
    push(&head, 7);
    push(&head, 9);
    cout << "Original Linked List" << endl;
    display(head);

    print_Middle(head);
    

 return 0;
}