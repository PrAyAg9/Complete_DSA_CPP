#include <iostream>
using namespaces std;
void fibbonaci(int n){
  int a = 0;
  int b = 1;
  int c;
  cout <<"0 1";
  for(int i=0;i<n;i++){
    c = a+ b;
    a = b;
    b = c;
    cout<<c<<" ";
  }
  cout <<endl;
}
int main(){
  fibboncai(4);

return 0;
}
