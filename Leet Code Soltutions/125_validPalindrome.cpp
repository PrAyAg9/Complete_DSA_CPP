// Beats 99% time Complexity and takes 10 MB for Space.
class Solution {
public:
    string toLower(string& s){
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]<'a' || s[i] >'z'){
                s[i] = s[i] - 'A' +'a';
            }
        }
        return s;
    }
    bool isPalindrome(string s) {
        string a;
        int n = s.length();
        if(n==0||n==1){
            return true;
        }
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z' || s[i] >='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'){
                a.push_back(s[i]);
            }
        }
        toLower(a);
        cout<<"a:- "<<a<<endl;
        string b;
        int n1 = a.length() - 1;
        int n2 = n1;
        for(int i=n1;i>=0;i--){
           b.push_back(a[i]); 
        }
        cout<<"b:- "<<b<<endl;
        for(int i=0;i<n1;i++){
            if(b[i]!=a[i]){
                return false;
            }
            n2--;
        }
        return true;
    }
};
