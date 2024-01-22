/* 운동 */
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

    int n, t, r;
    int min, max;

    cin >> n >> min >> max >> t >> r;

    int x = min; // 현재 맥박
    int tot = 0; // 소요된 총 시간
    int exer = 0; // 소요된 운동 시간

    if (min + t > max) {
        cout << "-1" << endl;
        return 0;
    } 

    while (exer != n) {
        if (x + t <= max) { // 운동하기 (X = X+T)
            x += t;
            tot++;
            exer++;
        } else { // 휴식하기 (X = X-R or m)
            x -= r;
            if (x < min) {
                x = min;
            }
            tot++;
        }
    }

    cout << tot << endl;
    return 0;
}