class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int a[256] = {0};
        int b[256] = {0};

        for(int i = 0; i < s.size(); i++) {

            if(a[s[i]] == 0 && b[t[i]] == 0) {

                a[s[i]] = t[i];
                b[t[i]] = s[i];

            }
            else {

                if(a[s[i]] != t[i] || b[t[i]] != s[i])
                    return false;
            }
        }

        return true;
    }
};