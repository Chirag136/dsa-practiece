class Solution {
public:
    bool mkc(int i,string &s){
        if(i>=s.size()/2) return true;
        if(s[i]!=s[s.size()-i-1]) return false;
        return mkc(i+1,s);
    }
    bool isPalindrome(string s) {
        string t;

        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                t += tolower(s[i]);
            }
        }

       return mkc(0,t);
    }
};
