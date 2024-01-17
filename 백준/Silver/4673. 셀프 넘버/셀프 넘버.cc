/* 셀프 넘버 */
#include <iostream>
#include <vector>
#include <string>  // string str의 배열 크기 str.size()
using namespace::std;

int d(int key) {
    int sum = key;

    while (key >= 10) {
        sum += key % 10;
        key /= 10;
    }
    sum += key;

    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // int key=1;
    // for (int num=1; num<=10000; num++) {
    //     while (num > d(key)) {
    //         key++;
    //     }
    //     if (num < d(key)) { // 현재 key는 생성자가 아님
    //         cout << num << endl; // 셀프넘버 출력
    //     } else { // 현재 key는 생성자에 해당함
    //         key++;
    //     }
    // }

    int num[10001];  // 1부터 10000까지 각각의 생성자 수를 담을 배열
    for (int n=1; n<=10000; n++) {
        num[n] = 0;
    }
    
    int tmp;
    for (int n=1; n<10000; n++) { // 1부터 9974까지의 생성자에 대해 배열 채우기
        tmp = d(n);
        if (tmp <= 10000) {
            num[tmp]++;
        }
    }

    for (int n=1; n<10000; n++) { // 생성자 없는 수 (셀프넘버) 출력
        if (num[n] == 0) {
            cout << n << endl;
        }
    }

    return 0;
}