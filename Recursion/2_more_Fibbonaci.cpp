#include <iostream>
using namespace std;

void reachHome(int src, int des){
    if (src == des){
        cout <<"pahuch gaya "<< endl;
        return;
    }

    src++;
    reachHome(src,des); 
}

int fibbonaciRec(int n){
    return fibbonaciRec(n-1) + fibbonaciRec(n-2);
}

void fibbonaci(int no){
    int s = 0;
    int e = 1;
    int c;

    cout << "0 1 ";
    for (int i = 2; i < no; i++)
    {
        c = s+e;
        s = e;
        e = c;
        cout<<c<<" ";
    }
    cout << endl;
    cout << "Element at position "<<no <<"in fibbonaci series is "<<c;
}

int main(){
    int dest = 10;
    int src = 6;

    reachHome(src, dest);

    fibbonaci(8);
}