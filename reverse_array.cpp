// program to print reverse element in array
//time complexity O(n)..
#include<iostream>

using namespace std ;

int main(){
int n ;
cout<<"enter the size of an array :" ;
cin>>n ;
int arr[n] ;

cout<<"entered an element in an array : " ;
for(int i = 0 ; i<n ; i++){
    cin>>arr[i];
}

cout<<"reverse the entered element"<<endl ;
for(int i = n-1 ; i>=0 ; i--){
    cout<<arr[i]<<endl;
}

return 0 ;
}
