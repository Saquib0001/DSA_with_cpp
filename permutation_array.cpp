

#include <bits/stdc++.h>

using namespace std;
 
// Function to find the next permutation i.e. next largest number... 

void nextPermutation(vector<int>& arr)
{

    next_permutation(arr.begin(),arr.end());
}


int main()
{
 

    vector<int> arr = {4,5,6};
 

    nextPermutation(arr);

    for (auto i : arr) {

        cout << i << " ";

    }
 
return 0; 
}