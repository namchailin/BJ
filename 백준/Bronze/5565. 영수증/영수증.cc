/* 영수증 */
#include <iostream>
#include <vector>
using namespace::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int sum;
    cin >> sum;

    int input_sum=0;
    for (int i=0; i<9; i++) {
        int input;
        cin >> input;
        input_sum += input;
    }
    int output = sum - input_sum;
    cout << output << endl;

    return 0;
}