/* 숫자의 합 */
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    string numbers;
    cin >> numbers;

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += numbers[i] - '0'; // 각 자리 숫자를 정수로 변환하여 더함
    }

    cout << sum << endl;
    return 0;
}