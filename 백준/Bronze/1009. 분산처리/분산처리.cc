/* 분산처리 */
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    int c[10]; int p[t];
    int a, b, k;

    for (int i=0; i<t; i++) {
        // 세팅 
        cin >> a >> b;
        for (int j=1; j<10; j++) {
            c[j] = 0;
        }

        // 계산
        c[0] = a % 10;
        k = 0;
        while (c[0] != (c[k]*a % 10)) {
            k++;
            c[k] = (c[k-1]*a % 10);
        }

        // 저장
        if (b % (k + 1) == 0) {
            p[i] = c[k];
        } else {
            p[i] = c[(b % (k + 1)) - 1];
        }
    }
    
    for (int i=0; i<t; i++) {
        if (p[i] == 0) {
            cout << 10 << endl;
        } else {
            cout << p[i] << endl;
        }
    }

    return 0;
}