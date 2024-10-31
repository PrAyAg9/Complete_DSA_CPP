#include <iostream>
using namespace std;

int sumOfArray(int *arr, int size){
    if (size ==0){
        return 0;
    }if(size == 1){
        return arr[0];
    }

    // THODA SOCHO RECURSION KO SAMAJHNA HAI  RATNA NAHI...
    
    int sum = 0;
    if(size > 1){
        sum = arr[0] + sum;
    }
    int total_sum = sumOfArray(arr+1,size-1);
    return total_sum;
    
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(int);
    cout << "size is "<< n<<endl;
    cout <<"sum of array - "<<sumOfArray(arr,n)<<endl;
}