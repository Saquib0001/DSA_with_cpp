// deletion of th nth node in a Linked List in C++
#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};
int calcLen(Node * node)
{

  int len = 0;

  while (node != NULL)
    {
      node = node->next;
      len++;
    }
  return len;
}

void insertNode(Node ** head, int data)
{
  Node *new_node = new Node ();

  new_node->data = data;
  new_node->next = *head;
  *head = new_node;
}

void deleteNthNode (int n, Node ** head)
{
  Node *temp = *head;
  Node *prevNode;

  int len = calcLen (*head);

  if (n < 1 || n > len)
    {
      cout << "Invalid" << endl;
      return;
    }

  // delete the 1st node 
  if (n == 1)
    {
      *head = (*head)->next;
      cout << temp->data << " deleted" << endl;
      delete (temp);
      return;
    }

  // traverse to the n'th node 
  while (--n)
    {
      prevNode = temp;
      temp = temp->next;
    }

  // change prevNode node's next node to nth node's next node
  prevNode->next = temp->next;

  // delete this nth node
  cout << temp->data << " deleted" << endl;;
  delete (temp);
}

void display (Node * temp)
{

  cout << "Linked List : ";

  // as linked list will end when Node is Null
  while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
  cout << endl;
}

int main ()
{
  Node *head = NULL;


  insertNode(&head, 9);
  insertNode(&head, 1);
  insertNode(&head, 5);
  insertNode(&head, 4);

  display (head);

  deleteNthNode(2, &head);

  display (head);

  return 0;
}