#include <iostream>
using namespace std;
int main(){
    // Learning about double pointers and remembering key concepts about them.
    int nums = 2;
    int *p = &nums;
    int **q = &p;

    cout<< **q<< endl;
    cout<<q<<endl;
    cout<<&p<<endl;


    // Null pointer syntax
    int *a = 0;
    a = &nums;// Never put a star here again

    int arr[] = {1,2,3,4};
    int *b = arr;
    // Never perform this
    // arr = arr +1;
    // You can always do this:-
    b = b+1;  //---- To get arrray forward

    // FORMULA -----  arr[i] = kuch to(ptr + i)

    // This also exist i[arr];
    // think in pointer logic


    cout<<"Double pointer Adress- "<<&q<<endl;
    cout<<"1) Single Pointer ka adress- "<<q<<endl;
    cout<<"1) -"<<&p<<endl;
    cout<<"2) Single pointer ki value- "<<&nums<<endl;
    cout<<"2)- "<<*q<<endl;
    cout<<"2)- "<<p<<endl;
    cout<<"3) nums ka adress Hi to single pointer ki value hai ..."<<endl;
    cout<<"4) nums ki value- "<<nums<<endl;
    cout<<"4_- "<<*p<<endl;
    cout<<"4)- "<<**q<<endl;
}