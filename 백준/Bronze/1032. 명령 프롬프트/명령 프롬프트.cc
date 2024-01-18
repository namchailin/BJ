/* 명령 프롬프트 */
#include <iostream>
#include <vector>
#include <string>  // string str의 배열 크기 str.size()
using namespace::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string name[n];
    for (int i=0; i<n; i++) {
        cin >> name[i];
    }

    string print = name[0];
    int len = print.size();

    for (int i=0; i<len; i++) {
        for (int j=1; j<n; j++) {
            if (print[i] != name[j][i]) {
                print[i] = '?';
                break;
            }
        }
    }

    cout << print << endl;
    
    return 0;
}