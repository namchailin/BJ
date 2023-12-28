#include <iostream>
#include <vector>

using namespace::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int lst[9];
    for (int i=0; i<9; i++)
        cin >> lst[i];

    int key = lst[0];
    int val = 1;
    for (int i=0; i<8; i++) {
        if (key < lst[i+1]) {
            key = lst[i+1];
            val = i+2;
        }
    }

    cout << key << "\n" << val << endl;
}