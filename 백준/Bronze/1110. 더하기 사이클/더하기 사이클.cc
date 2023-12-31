/* 더하기 사이클 */
#include <iostream>
#include <vector>
using namespace::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int oldnum, newnum;
    cin >> oldnum;

    int cycle = 0;
    newnum = (oldnum % 10) * 10 + (((oldnum / 10) + (oldnum % 10)) % 10);
    cycle++;
    while (oldnum != newnum) {
        newnum = (newnum % 10) * 10 + (((newnum / 10) + (newnum % 10)) % 10);
        cycle++;
    }

    cout << cycle << endl;

    return 0;
}