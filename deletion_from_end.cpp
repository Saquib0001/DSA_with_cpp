 
#include <iostream>
using namespace std;
 
class LinkedList {
public:
    // structure of a node
    class Node {
    public:
        int data;
        Node* next;
        Node(int d)
        {
            data = d;
            next = NULL;
        }
    };
 
    // Head node
    Node* head;
 
    // Function for inserting a node at the beginning
    void insert_Node(int data)
    {
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }
 
    // Function to display the nodes in the list.
    void display()
    {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
 
    // Function to delete the nth node from the end.
    void delete_Nth_Node_From_End(Node* head, int n)
    {
        Node* first = head;
        Node* temp_1 = head;
 
        for (int i = 0; i < n; i++) {
            first = first->next;
        }
 
        if (first == NULL) {
              head = head->next;
            return;
        }
 
        while (first->next != NULL) {
            first = first->next;
            temp_1 = temp_1->next;
        }
        temp_1->next = temp_1->next->next;
        return;
    }
};
 
int main()
{
 
    LinkedList* list = new LinkedList();
 
    // Create a list 1->2->3->4->5->NULL
    list-> insert_Node(5);
    list-> insert_Node(4);
    list-> insert_Node(3);
    list-> insert_Node(2);
    list-> insert_Node(1);
    cout << "Linked List Before deletion"<< endl;
    list->display();
 
    cout << "Delete nth Node from the End "<<endl<<endl;
    list->delete_Nth_Node_From_End(list->head, 2);
 
    cout << " Linked List after Deletion "<< endl;
    list->display();
 
    return 0;
}