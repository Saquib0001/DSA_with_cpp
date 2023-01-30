//time complexity O(n)
#include <iostream>

using namespace std;

void sort_element(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        if (arr[mid] == 1)
        {
            mid++;
        }
        if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    // int arr[]= {1,0,0,2,1,1,0,0,2,2,2,1,0};
    int m;
    cout << "enter the size of array : ";
    cin >> m;
    int arr[m];
    cout << "enter element in array(0,1,2) : ";
    for (int j = 0; j < m; j++)
    {
        cin >> arr[j];
    }
    cout << "entered element are : "<<endl;
    for (int j = 0; j < m ; j++)
    {
        cout << arr[j] << " " ;
    }

    cout<<endl;

    int n = sizeof(arr) / sizeof(int);
    sort_element(arr , n);
    cout<< "sorted element are(0,1 ,2) : " <<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;
}