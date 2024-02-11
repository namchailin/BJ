/* 팀 이름 정하기 */
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

    string girl;
    int n;
    cin >> girl >> n;
    string *team = new string[n];  // 팀명
    for (int i=0; i<n; i++) {
        cin >> team[i];
    }

    int cnt[4];  // LOVE 갯수 저장
    int teamlen;
    int girllen = girl.size();
    int product;
    int *win_percent = new int[n];  // 팀별 우승 확률
    for (int i=0; i<n; i++) {  // 팀별 순환
        for (int j=0; j<4; j++) {
            cnt[j] = 0;
        }
        for (int j=0; j<girllen; j++) {  // girl 이름에서 cnt 채우기
            if (girl[j] == 'L') {
                cnt[0]++;
            } else if (girl[j] == 'O') {
                cnt[1]++;
            } else if (girl[j] == 'V') {
                cnt[2]++;
            } else if (girl[j] == 'E') {
                cnt[3]++;
            }
        }
        teamlen = team[i].size();
        for (int j=0; j<teamlen; j++) {  // team 이름에서 cnt 채우기
            if (team[i][j] == 'L') {
                cnt[0]++;
            } else if (team[i][j] == 'O') {
                cnt[1]++;
            } else if (team[i][j] == 'V') {
                cnt[2]++;
            } else if (team[i][j] == 'E') {
                cnt[3]++;
            }
        }
        product = 1;
        for (int j=0; j<3; j++) {  // 채워진 cnt로 win_percent 계산하기
            for (int k=j+1; k<4; k++) {
                product *= cnt[j] + cnt[k];
            }
        }
        win_percent[i] = product % 100;
    }

    int maxidx = 0;
    int minlen;
    int j;
    for (int i=1; i<n; i++) {
        if (win_percent[maxidx] < win_percent[i]) {
            maxidx = i;
        } else if (win_percent[maxidx] == win_percent[i]) {  // 사전순으로 결정해야함;;
            minlen = (team[maxidx].size() > team[i].size()) ? team[maxidx].size() : team[i].size();
            for (j=0; j<minlen; j++) {
                if (team[maxidx][j] > team[i][j]) {
                    maxidx = i;
                    break;
                } else if (team[maxidx][j] == team[i][j]) {
                    continue;
                } else if (team[maxidx][j] < team[i][j]) {
                    break;
                }
            }
            if ((j == minlen) & (team[maxidx].size() > team[i].size())) {
                maxidx = i;
            }
        }
    }

    cout << team[maxidx] << endl;

    delete[] team;
    delete[] win_percent;

    return 0;
}