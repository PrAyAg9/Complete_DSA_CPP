class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length()-1;
        char p = ' ';
        int count = 0;
        for(int i=n;i>=0;i--){
            if(s[i]==p && count==0){
                continue;
            }
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A'&&s[i]<='Z')){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};