/* 집 주소 */
// 변수 크기만큼 배열 선언하려면 동적할당
// < 1차원일 경우 >
// 자료형 *배열명 = new 자료형[크기];
// delete[] 배열명;
// < 2차원일 경우 >
// 자료형 **배열명 = new 자료형*[세로크기];
// for (int i=0;i<n;++i) { 배열명[세로크기] = new 자료형[가로크기]; }
// for (int i=0;i<세로크기;++i) { delete[] 배열명[i]; } delete[] 배열명;

// a = (조건) ? c : d;  // 삼항연산자

// string str = "";  // str 초기화

// str.size()   // 문자열 배열 크기
// str = stoi(str)   // 문자열 정수형 변환
// 문자열 말고 문자의 정수형 변환은 '0'만 빼주면 됨
// str.erase(제거영역의 시작인덱스, 제거영역 길이)   // 문자열 일부 삭제
#include <string>
// abs()   // int형의 절댓값함수
#include <cstdlib>
// string input; getline(cin, input);  // 문자열 줄단위 입력
#include <iostream>
// v.size()  // 벡터 크기
#include <vector>
using namespace ::std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string n;
    int nlen;
    vector<int> print;
    int sum;
    while (1) {
        cin >> n;
        if (n != "0") {
            nlen = n.size();
            sum = nlen - 1 + 1 + 1;
            for (int i=0; i<nlen; i++) {
                if (n[i] == '0') {
                    sum += 4;
                } else if (n[i] == '1') {
                    sum += 2;
                } else {
                    sum += 3;
                }
            }
            print.push_back(sum);
        } else {
            break;
        }
    }

    int printlen = print.size();
    for (int i=0; i<printlen; i++) {
        cout << print[i] << endl;
    }

    return 0;
}