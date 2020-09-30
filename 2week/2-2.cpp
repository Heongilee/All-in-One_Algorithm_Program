#include "../MyHeaders.h"

int main() {
    int K, L;
    set<pair<int, int>> s;
    set<pair<int, int>>::iterator iter, start, end;

    cin >> K >> L;

    for (int i=0;i<L;i++){
        int no;
        cin >> no;
        s.insert(pair<int, int>(i + 1, no));
    }

    for (iter=s.begin();iter!=s.end();iter++){
        cout << iter->first << ", " << iter->second << endl;
    }

    return 0;
}