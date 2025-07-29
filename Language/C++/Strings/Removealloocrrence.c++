#include <iostream>
using namespace std;
class Solution
{
public:
    string removeOccurrences(string s, string part)
    {

        // s.find(part) < s.length() // Starting Position
        // s.erase[st,length]

        while (s.length() > 0 && s.find(part) < s.length())
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main()
{

    return 0;
}