#include "../MyHeaders.h"

int main() {
    string str1, str2;

    cin >> str1;
    cin >> str2;

    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);

    cout << str1 << ", " << str2 << endl;

    return 0;
}