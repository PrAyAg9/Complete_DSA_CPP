// Best Solution in Cpp --- Beats 100 % in time Complexity --- (Without Recursion and Loops):- 

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) ==0;
    }
};
