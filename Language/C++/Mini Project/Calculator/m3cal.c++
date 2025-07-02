#include <iostream>
using namespace std;

int main() {
    int sz;
    cout << "Enter size: ";
    cin >> sz;
    float num[sz];

    for (int i = 0; i < sz; i++)
    {
        cin >> num[i];
       
    }
    for (int j = 0; j < sz; j++)
    {
        cout << num[j] + num[j+1] << endl;
    }
    
    
    return 0;
}