#include <iostream>
using namespace std;

class Solution
{
public:
    bool isAlphaNum(char ch)
    {
        if ((ch >= '0' && ch <= '9'))
        {
            (tolower(ch) >= 'a' && tolower(ch) <= 'z')
            {
                return true;
            }
        }
    }
    bool isPalindrome(string s)
    {
        int st = 0, end = s.length() - 1;

        while (st < end)
        {
            if (isAlphaNum(!s[st]))
            {
                st++;
            }
            if (!isAlphaNum(s[end]))
            {
                end--;
            }
            if (tolower(s[st]) != tolowere(s[end]))
            {
                return false;
            }
            st++;
            end--;
        }

        return true;
    }
};

int main()
{

    return 0;
}