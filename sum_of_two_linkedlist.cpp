
#include <bits/stdc++.h> 
using namespace std; 
  
class Node  
{  
    public: 
    int data;  
    Node* next;  
};
  
// to insert a new node to linked list
void push(Node** head, int new_data)  
{  
    // allocate node at heap 
    Node* new_node = new Node[(sizeof(Node))];  
    
    // put in the data 
    new_node->data = new_data;  
    
    //link the old list of the new node 
    new_node->next = (*head);  
    
    // move the (*head) to point to the new node 
     (*head) = new_node;  
}
  
// to add two new numbers
Node* addTwoNumList(Node* list1, Node* list2) {
    stack<int> s1,s2;
    while(list1!=NULL){
        s1.push(list1->data);
        list1=list1->next;
    }
    while(list2!=NULL){
        s2.push(list2->data);
        list2=list2->next;
    }
    int carry=0;
    Node* result=NULL;
    while(s1.empty()==false || s2.empty()==false){
        int a=0,b=0;
        if(s1.empty()==false){
            a = s1.top() ; s1.pop() ;
        }
        if(s2.empty()==false){
            b=s2.top();s2.pop();
        }
        int total= a+b+carry;
        Node* temp=new Node();
        temp->data=total%10;
        carry=total/10;

        if(result==NULL){
            result=temp;
        }else{
            temp->next=result;
            result=temp;
        }
    }

    if(carry!=0){
        Node* temp=new Node();
        temp->data=carry;
        temp->next=result;
        result=temp;
    }
    return result;
}
  
void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        cout<<node->data<<" ";  
        node = node->next;  
    }  
    cout<<endl;  
}
  
int main()  
{  
    Node *head1 = NULL, *head2 = NULL;  
    
    int arr1[] = {5, 6, 7};  
    int arr2[] = {1, 8};  
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);  
    int size2 = sizeof(arr2) / sizeof(arr2[0]);  
    
    // Create first list as 5->6->7  
    int i;  
    for (i = size1-1; i >= 0; --i)  
        push(&head1, arr1[i]);  
    
    // Create second list as 1->8  
    for (i = size2-1; i >= 0; --i)  
        push(&head2, arr2[i]);  
      
    Node* result=addTwoNumList(head1, head2);
    printList(result);  // ans will be  5 6 7 + 1 8 = 5 8 5 
    
    return 0;  
}