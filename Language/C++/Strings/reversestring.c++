#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "Urvil";
    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        int st = 0, end = n - 1;
        while (st < end)
        {
            swap(str[st++], str[end--]);
        }
    }
    cout << str << endl;
    return 0;
}