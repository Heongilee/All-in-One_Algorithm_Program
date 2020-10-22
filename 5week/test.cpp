#include "../MyHeaders.h"

int main(int argc, char const *argv[])
{
    vector<int> v = {1, 2, 3, 4, 5};

    cout << *(v.begin() + 2) << " ";

    return 0;
}
