#include <iostream>
using namespace std;

// as update function also already created and argument is same so it gives problem.
void update2(int n){
    n++;
}

void u_pdate1(int& x){
    x++;
}

// NEVER DO THIS
int& update3(int x){
    // Baddest practice of all time
    int& b = x;
    int ans = b;
    return ans;
    // Bhai tum return kya kar rahe ho;
}

int main(){
    int a = 10;
    update23(a);
    cout <<a;
    u_pdate1(a);
    cout<<a;

    

    // 1) Bad practice of array , done in prev lecture but EHY I can't remember.
    int n ;
    cin>>n;
    // int arr[n];           Biggest mistake you can do but why coz as input is taken at run time and you must know the size of array at compile time
    // So Man this can be very injurous to health...

    // 2) Bad practice of reference --
    // in functions it is
//     int& update3(int x){
//     // Baddest practice of all time
//     int& b = x;
//     int ans = b;
//     return ans;
//     // Bhai tum return kya kar rahe ho;
// }

    return 0;
}