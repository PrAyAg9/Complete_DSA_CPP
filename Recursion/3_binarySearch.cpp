#include <iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int key){
    int mid = (s+e)/2;
    if (arr[mid] == key){
        return mid;
    }
    else if(arr[mid]>key){
        binarySearch(arr,s,e-mid,key);
    }
    else{
        binarySearch(arr,s+mid,e,key);
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    cout << binarySearch(arr,0,4,4);
}