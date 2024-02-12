/* 부재중 전화 */
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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, l, d;
    cin >> n >> l >> d;

    // 벨소리는 인덱스가 d의 배수일때마다 울림
    int hearing_time = 0;  // 출력 대상 (벨소리 울리는 시간 == 앨범 안울리는 시간)
    for (int i=1; i<n; i++) {
        if ((i*l + 5*(i-1)) % d == 0) {
            hearing_time = i*l + 5*(i-1);
            break;
        } else if ((i*l + 5*(i-1) + 1) % d == 0) {
            hearing_time = i*l + 5*(i-1) + 1;
            break;
        } else if ((i*l + 5*(i-1) + 2) % d == 0) {
            hearing_time = i*l + 5*(i-1) + 2;
            break;
        } else if ((i*l + 5*(i-1) + 3) % d == 0) {
            hearing_time = i*l + 5*(i-1) + 3;
            break;
        } else if ((i*l + 5*(i-1) + 4) % d == 0) {
            hearing_time = i*l + 5*(i-1) + 4;
            break;
        }
    }

    if (hearing_time == 0) {
        hearing_time = n*l + 5*(n-1);
        while (hearing_time % d != 0) {
            hearing_time++;
        }
    }
    
    cout << hearing_time << endl;

    return 0;
}