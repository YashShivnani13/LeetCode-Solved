class Solution {
public:
    bool valid(char ch)
{
    if((ch >= 'a' && ch <= 'z') ||
       (ch >= 'A' && ch <= 'Z') ||
       (ch >= '0' && ch <= '9'))
        return true;

    return false;
}

char toLowerCase(char ch)
{

    if(ch >= 'A' && ch <= 'Z')
        return ch - 'A' + 'a';

    return ch;
}

bool isPalindrome(string s)
{
    int st = 0;
    int e = s.size() - 1;

    while(st <= e)
    {
        while(st < e && !valid(s[st]))
            st++;

        while(st < e && !valid(s[e]))
            e--;

        if(toLowerCase(s[st]) != toLowerCase(s[e]))
            return false;

        st++;
        e--;
    }

    return true;
}
    
};