#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <utility> // pair 클래스를 사용하기 위함.

using namespace std;

int solution(vector<int> priorities, int location) {
    deque<pair<int, int>> dq;
    int ans;

    // Init
    for(int i=0;i<priorities.size();i++) {
        dq.push_back({priorities[i], i});   // priority, loc
    }

    int L = 0;
    while(!dq.empty()) {
        if(dq.front().first < (*max_element(dq.begin(), dq.end(), [](pair<int, int> A, pair<int, int> B){return A.first < B.first;})).first) {
            dq.push_back(dq.front());
            dq.pop_front();
        }
        else {
            pair<int, int> t = dq.front();
            dq.pop_front();
            L += 1;

            if(t.second == location) {
                ans = L;
                break;
            }
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    // int res = solution({2, 1, 3, 2}, 2);
    int res = solution({1, 1, 9, 1, 1, 1}, 0);
    cout << res << " ";
    return 0;
}
