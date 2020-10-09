#include "../MyHeaders.h"

int main(int argc, char const *argv[])
{
    vector<int> v;
    int mid, lt, rt;
    int key = 101;

    for (int i = 1; i <= 100; i++)
    {
        v.push_back(i);
    }

    lt = 0;
    rt = v.size() - 1;

    cout << "exist : ";
    while (lt <= rt) {
        mid = (lt + rt) / 2;

        if (v[mid] == key) {
            cout << boolalpha << true << endl;
            break;
        }
        else if (v[mid] > key) {
            rt = mid - 1;
        }
        else {
            lt = mid + 1;
        }
    } if(lt > rt) {
        cout << boolalpha << false << endl;
    }
    else {
        cout << "Find at : " << mid << endl;
    }

    return 0;
}
