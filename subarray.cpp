#include<iostream>

using namespace std;
void maximumSubarraySum(int array[], int n) {
  int max_sum = 0;
  int begin = 0;
  int end = 0;
  for (int i = 0; i < n; i++) {
    int current_sum = 0;
    for (int j = i; j < n; j++) {
      current_sum += array[j];
      if (max_sum < current_sum) {
        max_sum = current_sum;
        begin = i;
        end = j;
      }
    }
  }
  cout << "largest sum is " << max_sum << endl;
  cout << "largest sum contiguous subarray: ";
  for (int i = begin; i <= end; i++) {
    cout << array[i] << "\t";
  }
}
int main() {
  int array[] = {-10, 5, 1, 6, -9, 2, -7, 3, -5};
  maximumSubarraySum(array, sizeof(array) / sizeof(array[0]));
}
