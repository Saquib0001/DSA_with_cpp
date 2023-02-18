//program to find same elememt as majority and print it.
#include<bits/stdc++.h>
using namespace std;
int majority_element(vector<int> &arr)
{
    int count = 0, majority = 0; 
    for (size_t i = 0; i < arr.size(); i++)
    {
        if(count)
        {
            count = count +(arr[i] == majority ? 1 : -1);
        }
        else{

            majority = arr[i];
            count = 1;
        }
    }
    return majority;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,5,5,6,7,8};
    cout<<"Majority element is : "<<majority_element(arr);

    return 0;

}