#include <iostream>

#define print(x) cout << x

using namespace std;

void problem3() {

    int a, b;

    print("�� �� �Է�: ");
    cin >> a;
    cin >> b;

    if (a > b)
        cout << "ū��: " << a << '\n';
    else
        cout << "ū��: " << b << '\n';

    print('\n');
}
