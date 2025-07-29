#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, revstr;
    cout << "Enter String: ";
    getline(cin, str);

    revstr = str;

    int n = str.size();
    int st = 0, end = n - 1;

    for (int i = 0; i < n; i++)
    {
        while (st <= end)
        {
            swap(str[st++], str[end--]);
        }
    }

    if (revstr == str)
    {
        cout << "The given String is palindrome" << endl;
    }

    return 0;
}