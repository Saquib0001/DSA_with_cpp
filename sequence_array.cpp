
// C++ program to find longest contiguous subsequence
 

 #include<iostream>
 #include<unordered_set>  // for unordered_set template
using namespace std;
 

int findLongestConseqSubseq(int arr[], int n)
{
    unordered_set<int> S;
    int ans = 0;
 
    
    for (int i = 0; i < n; i++)
        S.insert(arr[i]);
 
    for (int i = 0; i < n; i++) {
        
        int j = arr[i];
        while (S.find(j) != S.end())
            j++;
 
        ans = max(ans, j - arr[i]);
    }
    return ans;
}
 

int main()
{
    int arr[] = { 5,9,6,8,7,13,15,16,25,33};
    int n = (sizeof arr) / (sizeof arr[0]);
    cout << "Length of the Longest contiguous subsequence is : " << findLongestConseqSubseq(arr, n);
    return 0;
}