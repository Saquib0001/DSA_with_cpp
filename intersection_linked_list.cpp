#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    Node* next;
};

 
/* function to get the intersection point of two linked
lists head1 and head2 */
// imp_function
Node* get_intesection_Node(Node* head1, Node* head2)
{
    while (head2) {
        Node* temp = head1;

        while (temp) {
            // if both Nodes are same
            if (temp == head2)
                return head2;
            temp = temp->next;
        }

        head2 = head2->next;
    }
    // intersection is not present between the lists
    return NULL;
}
 
int main()
{
   
    Node* newNode;

    //Addition of new nodes
    Node* head1 = new Node();
    head1->data = 10;
 
    Node* head2 = new Node();
    head2->data = 3;
 
    newNode = new Node();       
    newNode->data = 6;
    head2->next = newNode;
 
    newNode = new Node();
    newNode->data = 9;
    head2->next->next = newNode;
 
    newNode = new Node();
    newNode->data = 40;
    head1->next = newNode;
    head2->next->next->next = newNode;
 
    newNode = new Node();
    newNode->data = 30;
    head1->next->next = newNode;
 
    head1->next->next->next = NULL;


 
    Node* intersectionPoint = get_intesection_Node(head1, head2);
 
    if (!intersectionPoint)
        cout << " No Intersection Point \n";
    else
        cout << "Intersection Point: "<< intersectionPoint->data << endl;

return 0 ;

}

 /*
        Create two linked lists
        1st 3->6->9->40->30
        2nd 10->40->30
        40 is the intersection point
    */