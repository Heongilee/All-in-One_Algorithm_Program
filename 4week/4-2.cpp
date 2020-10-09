#include "../MyHeaders.h"

int main(int argc, char const *argv[])
{
    int N;
    int key;
    vector<int> v;

    cin >> N;
    for(int i=0;i<N;i++){
        int tmp;
        scanf("%d", &tmp);

        v.push_back(tmp);
    }
    cin >> key;

    int lt = 0;
    int rt = N - 1;
    int mid;
    while(lt <= rt){
        mid = (lt + rt) / 2;

        if(v[mid] == key) {
            break;
        }
        else if(v[mid] > key) {
            rt = mid - 1;
        }
        else if(v[mid] < key) {
            lt = mid + 1;
        }
    }
    cout << mid + 1 << endl;
    return 0;
}
