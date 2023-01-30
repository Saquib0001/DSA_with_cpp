
// C++ code to find
// duplicates in O(n) time
#include <iostream>

using namespace std ;
 
int main()
{
   int n ;
   cout<<"enter the size of array : ";
   cin>>n;
   int arr[n];
   for(int i = 0 ; i<n ; i++){
    cin>>arr[i];
   }
   cout<<"elements entered are : "<<endl;
   for(int i = 0 ;i<n ; i++){
    cout<<arr[i]<<" " ;
   }
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arr_size; i++) {

        arr [arr[i] % arr_size] = arr [arr[i] % arr_size] + arr_size; // this line is very imp to understand
    }
    cout <<"\nThe repeating elements are : " << endl;

    for (int i = 0; i < arr_size; i++) {
        if (arr[i] >= arr_size * 2) {
            cout << i << " " << endl;
        }
    }
    return 0;
}