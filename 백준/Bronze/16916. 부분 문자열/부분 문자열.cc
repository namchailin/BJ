/* 부분 문자열 */
// O(n)로 해결해야 하므로 strstr 함수 사용
// 찾고자 하는 문자열을 찾으면 해당 위치의 포인터(char* 형) 반환
// 찾지 못하면 NULL 반환
#include <iostream>
// #include <vector>
// #include <string>  // string str의 배열 크기 str.size()
#include <cstring>
using namespace::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s, p;
    cin >> s >> p;

    // int sl, pl;
    // sl = s.size();
    // pl = p.size();

    // int tmp;
    // for (int i = 0; i < sl-pl+1; i++) {
    //     tmp = i;
    //     for (int j = 0; j < pl; j++) {
    //         if (s[tmp] != p[j]) {
    //             break;
    //         }
    //         tmp++;
    //         if (j == pl-1) {
    //             cout << '1' << endl;
    //             return 0;
    //         }
    //     }
    // }

    // for (int i=0; i<sl-pl+1; i++) {
    //     if (s.substr(i, pl) == p) {
    //         cout << '1' << endl;
    //         return 0;
    //     }
    // }

    if (strstr(s.c_str(), p.c_str()) != NULL) {
        cout << '1' << endl;
    } else {
        cout << '0' << endl;
    }

    return 0;
}