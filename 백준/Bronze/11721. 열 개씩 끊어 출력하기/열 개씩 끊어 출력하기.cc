/* 열 개씩 끊어 출력하기 */
#include <iostream>
#include <vector>
#include <string>  // string str의 배열 크기 str.size()
using namespace::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string input;
    cin >> input;

    int len = input.size();

    string print = "";
    for (int i=0; i<len; i++) {
        print += input[i];
        if (((i != 0) & (i % 10 == 9)) | (i == len - 1)) {
            cout << print << endl;
            print = "";
        }
    }

    return 0;
}