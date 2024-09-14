#include <iostream>
using namespace std;

// Two types of memory allocation one is static other is Dynamic.'
// two places in which memory is allocated -- STACK OR HEAP ; mostly it is stack
// HEAP - only way to use heap memory is to use new keyword and it has it's syntax


// Use smart pointers (e.g., unique_ptr, shared_ptr) to automatically manage memory deallocation and handle exceptions safely.
// Allocate memory only when necessary and deallocate it as soon as you're done using it.


int main(){
    // static memory allocation - 
    int i;

    // dynamic memory allocation ONLY WAY- (new int) bas itna hi-
    // 1ST WAY:-
    int *p = new int;
    *p = 10;
    delete p;

    // 2ND WAY:-
    int n;
    cin>>n; 
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value of Array at index -"<<i<<endl;
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<"value of Array at index -"<<arr[i]<<endl;
    }
    delete[] arr;

    // 3RD WAY (2D ARRAY):-
    cout<<"By default we take array of size 3";
    // Firstly i want int* columns so it's wrong
    // int *p = new int[3];
    

    // TOUGH CONCEPT - Let's undertand it more clearly
    // int rows = 3;
    // int columns = 3;
    // int** arr = new int*[rows];
    // for(int i=0;i<rows;i++){
    //     arr[i] = new int[columns];
    // }

    int rows = 3;
    int cols = 4;

    // Allocate memory for the 2D array
    int** arr1 = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr1[i] = new int[cols];
    }


    // JAGGED ARRAY:-
    int r;
    int c;
    cout<<"Enter the no of rows in this jagged array:- ";
    cin>>r;
    cout<<endl;
    int **jaggedarray = new int*[r];
    for(int i=0;i<r;i++){
        cout<<"Enter the no of columns for the "<<c<<" row";
        cin>>c;
        jaggedarray[i] = new int[c];

        for(int j=0;j<c;j++){
            cout<<"Enter the value of Array at index -"<<i<<endl;
            // cin>>arr[i]; -- MISTAKE two
            cin>>jaggedarray[i][j];
        }
    }

    // input value -- can't do this udhar hi input karna hoga
    // for(int i=0;i<r;i++){
    //     for(int j=0;j)
    // }

    // OUTPUT 
    for (int i = 0; i < r; i++){
        // for(int j=0;j<jaggedarray[i].length;j++){
        for(int j=0;j<*jaggedarray[i];j++){            
            cout<<jaggedarray[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // deleting it
    for(int i=0;i<n;i++){
        delete[] jaggedarray[i];
    }
    delete[] jaggedarray;
    
    return 0;
}