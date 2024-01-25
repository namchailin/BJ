/* 팰린드롬 만들기 */
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

    string n;
    cin >> n;

    int len = n.size();

    int cnt[26];
    for (int i=0; i<26; i++) {
        cnt[i] = 0;
    }
    for (int i=0; i<len; i++) {
        cnt[n[i] - 'A']++;
    }

    char p[len+1]; // 널문자 포함
    p[len] = '\0';
    int j = 0;
    char keep = 0;
    for (int i=0; i<26; i++) {
        if ((cnt[i] != 0) & (cnt[i] % 2 != 0)) {
            if (keep == 0) {
                keep = i + 'A';
                    cnt[i]--;
            } else {
                cout << "I'm Sorry Hansoo" << endl;
                return 0;
            }
        }
        if ((cnt[i] != 0) & (cnt[i] % 2 == 0)) {
            if (j < len / 2) {
                for (int k = 0; k < cnt[i]/2; k++) {
                    p[j] = i + 'A';
                    p[len - j - 1] = i + 'A';
                    j++;
                }
            } else {
                break;
            }
        }
    }
    if (keep != 0) {
        p[len/2] = keep;
    }

    cout << p << endl;

    return 0;
}