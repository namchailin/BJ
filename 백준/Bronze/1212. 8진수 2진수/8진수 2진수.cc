/* 8진수 2진수 */
// 변수로 된 크기만큼 배열 할당하려면 동적 할당
// 1차원일 경우
// 자료형 *배열명 = new 자료형[크기];
// 2차원일 경우
// 자료형 **배열명 = new 자료형*[세로크기];
// 자료형 배열명[세로크기] = new 자료형[가로크기];

// 삼항연산자 a = (조건) ? c : d;

// string str = "";  // str 초기화

// str.size()   // 문자열 배열 크기
// str = stoi(str)   // 문자열 정수형 변환
// 문자열 말고 문자의 정수형 변환은 '0'만 빼주면 됨
// str.erase(제거영역의 시작인덱스, 제거영역 길이)   // 문자열 일부 삭제
#include <string>

// abs()   // int형의 절댓값함수
#include <cstdlib>

#include <iostream>
#include <vector>
using namespace ::std;

// int pow(int n, int m) {
//     int p=1;
//     for (int i=0; i<m; i++) {
//         p *= n;
//     }
//     return p;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     long long octal;
//     cin >> octal;

//     long long decimal = 0;
//     int len8=1;
//     while (octal >= 10) {
//         decimal += (octal % 10) * len8;
//         len8 *= 8;
//         octal /= 10;
//     }
//     decimal += octal * len8;

//     long long binary = 0;
//     int len2=1;
//     int len_print=1;
//     while (decimal - len2*2 >= 2) {
//         len2 *= 2;
//         len_print++;
//     }
//     for (int i=len_print; i>0; i--) {
//         if (decimal - len2 >= 0) {
//             decimal -= len2;
//             binary += pow(10, i-1);
//         }
//         len2 /= 2;
//     }

//     cout << binary << endl;

//     return 0;
// }

// 8진수에서 10진수를 거쳐 2진수를 만드는건 시간초과
// 8진수에서 일대일매칭을 통해 바로 2진수 만들기
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string octal;
    cin >> octal;
    
    long long len = octal.size();
    string binary = "";
    for (int i=0; i<len; i++) {
        if (octal[i] == '0') {
            binary += "000";
        } else if (octal[i] == '1') {
            binary += "001";
        } else if (octal[i] == '2') {
            binary += "010";
        } else if (octal[i] == '3') {
            binary += "011";
        } else if (octal[i] == '4') {
            binary += "100";
        } else if (octal[i] == '5') {
            binary += "101";
        } else if (octal[i] == '6') {
            binary += "110";
        } else if (octal[i] == '7') {
            binary += "111";
        }
    }

    // 앞부분 0 제거하기
    int idx = 0;
    while (binary[idx] == '0') {
        binary.erase(idx, 1);
    }
    if (binary == "") {
        binary = '0';
    }

    cout << binary << endl;

    return 0;
}