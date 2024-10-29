// for me this code seems to think very hard learn to get approachea and make this entire code easy 
// how can i apply recursion and dynamic programming into it. is it easy that way -- 
#include <iostream>
using namespace std;
 
string ntowords(int n){
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // string a = " ";
    // a.push_back(words[4]); -- wrong techique run a loop and use concatenation to achieve it.
    string result = " ";
    while(n>0){
        int digit = n%10;
        result = words[digit] + " "+ result;
        n = n/10;
    }
    return result;
}

int main(){
    int number = 34098;
    cout << ntowords(number);
}