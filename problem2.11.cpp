#include <iostream>

#define print(x) cout << x
#define loop(i, a, b) for(int i = a; i < b; i++)

using namespace std;

void problem11() {
    int n = 0;
    int sum = 0;
    print("�� �� �Է�: ");
    cin >> n;

    loop(i, 0, n + 1) {
        sum += i;
    }

    cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << "\n";
    print('\n');
}
