/* 369 */
#include <iostream>
#include <vector>
using namespace::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int clap=0;
    int current_i, temp;
    for (int i=1; i<=N; i++) {
        current_i = i;
        while (current_i >= 10) {
            temp = current_i % 10;
            if ((temp == 3) | (temp == 6) | (temp == 9)) {
                clap++;
            }
            current_i /= 10;
        }
        temp = current_i;
        if ((temp == 3) | (temp == 6) | (temp == 9)) {
            clap++;
        }
    }

    cout << clap << endl;

    return 0;
}