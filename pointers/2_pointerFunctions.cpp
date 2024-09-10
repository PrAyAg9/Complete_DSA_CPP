#include <iostream>
using namespace std;

void printValueOfPointer(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    // p = p +1; --- Just change value of it in this block of function
    *p = *p+1;
    cout<<*p<<endl;
}

int sumArray(int *arr, int n){
    int sum = 0;
    cout<<"Size:- "<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    return sum;
}

int main(){
    // int num = 5;
    // int *p = &num;
    // printValueOfPointer(p);
    // update(p);

    int arr1[5] = {1,2,3,4,5};
    int size = 4;
    cout << sumArray(arr1,5);
    return 0;
}