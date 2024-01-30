/* 농구 경기 */
// 변수로 된 크기만큼 배열 할당하려면 동적 할당
// 1차원일 경우
// 자료형 *배열명 = new 자료형[크기];
// 2차원일 경우
// 자료형 **배열명 = new 자료형*[세로크기];
// 자료형 배열명[세로크기] = new 자료형[가로크기];

// 삼항연산자 a = (조건) ? c : d;

// string str = "";  // str 초기화

// str.size()   // 문자열 str의 배열 크기
// str = stoi(str)   // 문자열 str의 정수형 변환
// 문자열 말고 문자의 정수형 변환은 '0'만 빼주면 됨
#include <string>

// abs()   // int형의 절댓값함수
#include <cstdlib>

#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int cnt[26];
    for (int i=0; i<26; i++) {
        cnt[i] = 0;
    }
    for (int k=0; k<n; k++) {
        string str;
        cin >> str;
        cnt[str[0] - 'a']++;
    }
    
    string print = "";
    for (int i=0; i<26; i++) {
        if (cnt[i] >= 5) {
            print += i + 'a';
        }
    }
    if (print == "") {
        print = "PREDAJA";
    }

    cout << print << endl;

    return 0;
}