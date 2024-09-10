#include <iostream>
using namespace std;
int main(){
    // array ka name hi array ka adress store karke rakhta hai first element ka 
    int arr[4] = {10,12,14,15};
    cout <<arr[0];
    cout<<"Printing the adress of first array element -"<<arr<<endl;
    cout <<"Printing the adress of first array element -"<< &arr[0] <<endl;

    // Let's learn accessing array through pointers
    cout<<"Access first element of array "<<*arr<<endl;
    cout<<"Operation on first element of array" <<*arr + 1<<" or "<<*(arr)+1<<endl;
    cout<<"Access second element of array"<<*(arr+1)<<endl;

    // So by this we understand that {{{{arr[i]  ===  *(arr+i)}}}};

    // Most IMP Concept -- i[arr] = *(i+arr);

    int arr1[10] = {0};
    cout <<"This is a quiz of 10 question answer will be printed GUess what query prints it."<<endl;
    int *p = &arr1[0];
    // You can only access specific array value with the help of pointer as adress of one is always stored behind.
    // BUT By that one single pointed using arithmetic in pointer you can acesss all the elements.
    cout<<"1-"<<*p<<endl;
    cout<<"2-"<<arr1[0]<<endl;
    cout<<"3-"<<p<<endl;
    cout<<"4-"<<arr1<<endl;
    cout<<"5-"<<&arr[0]<<endl;
    cout<<"6-"<<&(*p)<<endl;
    cout<<"7-"<<&p<<endl;
    cout<<"8-"<<"will &ptr = 200 can be possible nigga -- "<<"nope"<<endl;
    // Adress ko app kabhi reasign nahi kar sakte that means -- change in symbol table is not possible.


}