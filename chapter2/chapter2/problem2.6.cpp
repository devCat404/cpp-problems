#include <iostream>
#include <cstring>
#include <string>

#define print(x) cout << x
#define loop(i, a, b) for(int i = a; i < b; i++)

using namespace std;

void problem6() {
    char a[50];
    char b[50];

    print("ù ��ȣ �Է�: ");
    getchar();
    cin.getline(a, 50, '\n');
    print("��ȣ �ٽ� �Է�: ");
    cin.getline(b, 50, '\n');

    if (strcmp(a, b) == 0) {
        print("�����ϴ�.\n\n");
    }
    else {
        print("�ٸ��ϴ�.\n\n");
    }
}
