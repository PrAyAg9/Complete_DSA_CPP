#include <iostream>
using namespace std;
int main(){

    // 1) Very first thing to remember is cout behaviour is different for both char and int 
    int arr[4] = {1,2,3,4};
    // so by this you would understand difference between char array and int array.
    char ch[] = "abc"; 

    char *p = &ch[0];
    cout<<ch<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;  // -- THis prints the entire string not the adress


    char temp = 'z';
    char *a = &temp;
    cout<<a<<endl;

    // Pointer addition , subtraction is defined and can be carried out suitably.
    
    return 0;
}