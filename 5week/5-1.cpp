#include <iostream>
#include <vector>
#include <stack>

using namespace std;
/*  // 내가 짠 거
int main(int argc, char const *argv[])
{
    int N;
    vector<int> v;

    cin >> N;

    for(int i=0;i<N;i++){
        int tmp;
        cin >> tmp;

        v.push_back(tmp);
    }

    for(int tower=N-1;tower >= 0;tower--) {
        int j;
        for(j = tower - 1;j >= 0;j--) {
            if(v[j] > v[tower]) {
                v[tower] = j + 1;
                break;  // next tower
            }
        }
        if(j == -1) {
            v[tower] = 0;
        }
    }

    // output
    for(auto & e : v) {
        cout << e << " ";
    }
    cout << endl;
}
*/

// 효율성 개선 버전
int main(int argc, char const *argv[])
{
    int n;

    // 입출력 가속
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<pair<int, int>> S; // <idx, height>

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;

        while (!S.empty())
        {
            if (S.top().first > tmp)
            {
                cout << S.top().second << " ";
                break;
            }

            S.pop();
        }

        // 첫 번째 탑은 수신하는 탑이 없으므로 무조건 0이다.
        if (!S.size())
            cout << 0 << " ";
        S.push({tmp, i});
    }

    return 0;
}
