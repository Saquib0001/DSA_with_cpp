
#include<iostream>

using namespace std;
 
void print_repeat_Elements(int arr[], int size)
{
    int i;
    cout << "The repeating element is :  ";
 
    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << "\n\n";
    }
 
    cout << "and the missing element is : "<<endl;
    for (i = 0; i < size; i++) {
        if (arr[i] > 0)
            cout << (i + 1) <<" ";
    }
}
 
int main()
{
    int arr[] = { 1,5,3,8,4,7,5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    print_repeat_Elements(arr, n);
}