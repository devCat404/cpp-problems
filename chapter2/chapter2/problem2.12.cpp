#include <iostream>

#define print(x) cout << x
#define loop(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int sum(int a, int b) {
    
    int res = 0;
    
    loop(k, a, b + 1) {
        res += k;
    }

    return res;
}

void problem12() {
    int n = 0;
    print("�� �� �Է�: ");
    cin >> n;

    printf("\n1���� %d������ ���� %d\n\n", n, sum(1, n));
}
