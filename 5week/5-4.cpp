#include <iostream>
#include <string>
#include <vector>
#include <numeric>  // std::accumulate 사용하기 위함.

using namespace std;

int N;
int _target;
int cnt = 0;
vector<int> _numbers;

void DFS(int L, int sum) {
    if(L == N) {
        if(_target == sum)
            cnt += 1;
        return ;
    }
    // cut-edge 
    // 리스트의 남은 숫자들로 아무리 더해도 _target 이상의 수를 못 만든다고 하면 가지를 뻗을 필요가 없다.
    if((L < N - 1) && _target > sum + accumulate((_numbers.begin() + L), _numbers.end(), 0)) {
        return;
    }
    else {
        DFS(L + 1, sum + _numbers[L]);
        DFS(L + 1, sum - _numbers[L]);
    }

    return;
}

int solution(vector<int> numbers, int target) {
    N = numbers.size();
    _numbers = numbers;
    _target = target;
    DFS(0, 0);

    return cnt;
}

int main(int argc, char const *argv[])
{
    int res = solution({1, 1, 1, 1, 1}, 3);
    cout << res << endl;
    return 0;
}