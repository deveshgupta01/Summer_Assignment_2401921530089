
class Solution {
public:
    string solve(string &s, int &i) {
        string ans = "";

        while (i < s.size() && s[i] != ']') {

            if (isalpha(s[i])) {
                ans += s[i];
                i++;
            }
            else if (isdigit(s[i])) {

                int num = 0;

                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                i++; // skip '['

                string temp = solve(s, i);

                i++; // skip ']'

                for (int k = 0; k < num; k++) {
                    ans += temp;
                }
            }
        }

        return ans;
    }

    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }
};
