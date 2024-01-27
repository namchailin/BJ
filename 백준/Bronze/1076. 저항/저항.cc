/*  */
// 변수로 된 크기만큼 배열 할당하려면 동적 할당
// 1차원일 경우
// 자료형 *배열명 = new 자료형[크기];
// 2차원일 경우
// 자료형 **배열명 = new 자료형*[세로크기];
// 자료형 배열명[세로크기] = new 자료형[가로크기];
#include <iostream>
#include <vector>
// str.size(): 문자열 str의 배열 크기
// str = stoi(str): 문자열 str의 정수형 변환
// 문자열 말고 문자의 정수형 변환은 '0'만 빼주면 됨
#include <string>
using namespace ::std;

int pow(int n, int m) {
    int result=1;
    for (int i=0; i<m; i++) {
        result *= n;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string color1, color2, color3;
    cin >> color1 >> color2 >> color3;

    string res[10];
    res[0] = "black";
    res[1] = "brown";
    res[2] = "red";
    res[3] = "orange";
    res[4] = "yellow";
    res[5] = "green";
    res[6] = "blue";
    res[7] = "violet";
    res[8] = "grey";
    res[9] = "white";

    long long val1, val2, val3;
    for (int i=0; i<10; i++) {
        if (res[i] == color1) {
            val1 = i;
        }
        if (res[i] == color2) {
            val2 = i;
        }
        if (res[i] == color3) {
            val3 = pow(10, i);
        }
    }

    long long val = (val1 * 10 + val2) * val3;
    cout << val << endl;

    return 0;
}