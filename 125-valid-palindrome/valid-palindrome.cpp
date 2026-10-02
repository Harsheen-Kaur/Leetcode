class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char x) {
            return !isalnum(x);
        }), s.end());

        for (char &x : s) {
            x = tolower(x);
        }
    string reversed_str(s.rbegin(), s.rend());
    return reversed_str==s;
    }
};