// Beats 100% User in Time Complexity -- Best Solution for Peak Element in Array.

#include <iostream>
using namespace std;

int findPeak(int arr[], int n) {

if (n == 1) // array of size 1 is always a peak

return arr[0];

if (arr[0] >= arr[1]) // first element is a peak

return arr[0];

if (arr[n-1] >= arr[n-2]) // last element is a peak

return arr[n-1];

for (int i = 1; i < n-1; i++) { // check for peak element in the middle

if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1])

return arr[i];

}

return -1; // no peak element found

}

int main() {

int arr[] = { 1, 3, 20, 4, 1, 0 };

int n = sizeof(arr) / sizeof(arr[0]);

int peak = findPeak(arr, n);

if (peak == -1)

cout << "No peak element found";

else

cout << "Peak element is " << peak;

return 0;

}
