#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // int start, end, sz;
    // cin >> start;
    // cin >> end;

    vector<int> vec = {1, 2, 3, 4, 5};
    int  sz = vec.size();

    for (int start = 0; start < sz ; start++){
        for (int end = 0; end < sz ; end++){
            for (int i = start; i <= end; i++){
                cout << vec[i];
            }
            cout << " ";
        }
        cout  << endl;
    }

    return 0;
}