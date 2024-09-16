// In this tutorial you are going to learn about 1) Marcro 2) Global Variable 3) Inline functions -- Let's Go.

#include <iostream>
// 1) Macro Representation:-   -- SYNTAX --
#define pi 3.14

// 2) Global Variables (Don't use);
int a = 3; 
using namespace std;

// 3) Inline Function -- try it to be in one line 
inline int max(int& n1, int& n2){
    return (n1>n2)?n1:n2;
}
// Basically function does is it puts this single line at that place at compile time 


int main(){
    // 1)
    int area = pi * 1;
    cout<<area;

    // Ternary Operator
    // --SYNTAX -- condition ? (true-syntax) : (false-syntax)           ;
    int num1 = 2;
    int num2 = 4;
    int ans;
    if(num1>num2){
        ans = num1;
        cout<<ans;
    }
    else{
        ans = num2;
        cout<<ans;
    }
    cout<<endl;
    num1+=3;
    num2++;
    ans = (num1>num2)?(ans = num1):(ans=num2);
    cout<<ans;



    // 3) Using inline function for better perfomance.
    num1 = 5;
    num2 = 8;
    cout << max(num1, num2) << endl;

    num1+=5;
    cout<< max(num1,num2)<< endl;

    // Let us Revise pointer kiddo -- got it or not,
    int a = 2;
    int *p = &a;
    // a single way to define pointers but there's more.
    int **p1 = &p;
    // normal hi hota bas aisa aage badte jayga.


    // Dynamic allocation remember or not about stack and heap allocation --
    // using new keyword 
    int i;
    cout<<"\n Enter the size of array you want to iniiate (columns)"<<endl;
    cin >>i;
    int *p2 = new int;
    delete p2;

    int* p3 = new int[i];
    delete[] p3;

    int r;
    cout<<"Enter the no of rows you want you array to have- "<<endl;
    int** p4 = new int*[r];
    for(int j=0;j<r;j++){
        int* p4 = new int[i];
    }

    // loop se banaya hai to loop se na exit hoga 
    // delete[] p5;
    for(int k=0;k<r;k++){
        delete[] p4[k];
    }
    delete[] p4;

}