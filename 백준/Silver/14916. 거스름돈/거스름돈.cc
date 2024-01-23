/* 거스름돈 */
#include <iostream>
#include <vector>
// str.size(): 문자열 str의 배열 크기
// str = stoi(str): 문자열 str의 정수형 변환
// 문자열 말고 문자의 정수형 변환은 '0'만 빼주면 됨
#include <string>
using namespace ::std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; // 거스름돈 액수
    cin >> n;

    if ((n == 1) | (n == 3)) {
        cout << "-1" << endl;
        return 0;
    }

    int c5 = n / 5; // 5원 갯수
    if (((n % 2 == 0) & (c5 % 2 != 0)) | ((n % 2 != 0) & (c5 % 2 == 0))) {
            c5--;
    }
    int c2 = (n - 5 * c5) / 2; // 2원 갯수

    cout << c2 + c5 << endl;
    return 0;
}