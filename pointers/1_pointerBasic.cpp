#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    // 1) Learning Pointer -- so what does *means & what does & means
    int num = 5;
    int *p = &num;
    // &p --- It stores the adress of mentioned variable
    // *p --- It references to the value stored in adress also -- (Dereference Operator)
    // Together Both are called Syntax of pointer
    cout<<"Value of num -"<<num;
    cout<<"Value of num -"<<*p;
    cout<<"Address of num -"<<&num;
    cout<<"Address of num -"<<p<<endl;

    // 2) Another way to represent pointer
    int *pt = 0;
    int num1 = 2;
    // Always intialize pointer with null value if you have it to do at start
    pt = &num1;
    cout <<"Type of *pt"<<typeid(pt).name();
    cout <<"Type of num1 " <<typeid(num1).name();

    cout<<&num1<<endl;;
    cout<<pt<<endl;
    cout<<*pt<<endl;;


    // 3) Now's let's copy a pointer
    int num2 = 6;
    int *pt1 = &num2;
    int *pt2 = pt1;
    //  -- This is the way of how you copy pointer.

    // 4)Arithmetic operation using pointer
    int num4 = 8;
    int *a = &num4;
    *a = *a+1;
    cout<<"Value of *a " <<*a<<endl; 

    // -- BIG DIFFERENCE -- The a++ part means increment the pointer a itself, not the value it points to. So, a++ moves the pointer a to the next integer location in memory.
    *a++;
    cout<<"Value of *a " <<*a<<endl;
    // what if a++
    cout <<"Value of a before operation "<<a<<endl; 
    a++;

    cout <<"Value of a after operation "<<a<<endl;   
}