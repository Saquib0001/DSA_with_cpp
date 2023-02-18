// Write a program to print Target sum
// Target sum=7
// Input-{2,4,5,6,3}
// Output -{ 2}
// Explanation - {2,5},{4,3}

#include<bits/stdc++.h>
using namespace std;

int TargetSum(vector<int> &arr,int target)
{
    int count = 0;
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = 1; j < arr.size(); j++)
        {
            if(arr[i] + arr[j] == target)
            count++;
        }
    }
    return count;
    
}
int main()
{
    vector<int> arr = {5,7,22,4,8};
    int n;
    cout<<"Enter the target : ";
    cin>>n;
    cout<<"No. of permutation is :"<<TargetSum(arr,n);

    return 0;
}