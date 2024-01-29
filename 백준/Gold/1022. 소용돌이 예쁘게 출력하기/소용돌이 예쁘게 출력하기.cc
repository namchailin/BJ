/* 소용돌이 예쁘게 출력하기 */
// 변수로 된 크기만큼 배열 할당하려면 동적 할당
// 1차원일 경우
// 자료형 *배열명 = new 자료형[크기];
// 2차원일 경우
// 자료형 **배열명 = new 자료형*[세로크기];
// 자료형 배열명[세로크기] = new 자료형[가로크기];

// 삼항연산자 a = (조건) ? c : d;

// str.size(): 문자열 str의 배열 크기
// str = stoi(str): 문자열 str의 정수형 변환
// 문자열 말고 문자의 정수형 변환은 '0'만 빼주면 됨
#include <string>

// int형의 절댓값함수 abs()
#include <cstdlib>

#include <iostream>
#include <vector>
using namespace ::std;

int digit(int tmp) {
    int n=1;
    while (tmp >= 10) {
        tmp /= 10;
        n++;
    }
    return n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int save[r2-r1+1][c2-c1+1];
    
    int p, q; // 현재 좌표
    int key;  // 현재 좌표가 해당하는 껍질 번호
    int edge; // 현재 좌표가 해당하는 껍질에서 각 꼭짓점의 차 (모서리 - 1)
    int tmp; // 현재 좌표에 들어갈 수
    int digit_max = 1; // 좌표 중에 최대자릿수
    for (int i=0; i<r2-r1+1; i++) {
        for (int j=0; j<c2-c1+1; j++) {
            p = r1 + i;
            q = c1 + j;
            key = (abs(p) >= abs(q)) ? abs(p) : abs(q);
            edge = key * 2;
            tmp = (key*2 + 1)*(key*2 + 1);

            if (p == key) {
                tmp -= abs(key - q);
            } else if (q == -key) {
                tmp -= edge + abs(key - p);
            } else if (p == -key) {
                tmp -= edge*2 + abs(-key - q);
            } else if (q == key) {
                tmp -= edge*3 + abs(-key - p);
            }
            save[i][j] = tmp;
            
            if (digit_max < digit(tmp)) {
                digit_max = digit(tmp);
            }
        }
    }

    int spacebar;
    for (int p=0; p<r2-r1+1; p++) {
        for (int q=0; q<c2-c1+1; q++) {
            spacebar = digit_max - digit(save[p][q]);
            for (int i = 0; i < spacebar; i++) {
                cout << " ";
            }
            if (q != 0) {
                cout << " ";
            }
            cout << save[p][q];
        }
        cout << endl;
    }

    return 0;
}