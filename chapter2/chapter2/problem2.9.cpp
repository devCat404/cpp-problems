#include <iostream>
#include <string>

#define print(x) cout << x
#define loop(i, a, b) for(int i = a; i < b; i++)

using namespace std;

void problem9() {
    string name, address;
    int age;

    print("�̸�: ");
    getchar();
    getline(cin, name);
    print("�ּ�: ");
    getline(cin, address);
    print("����: ");
    cin >> age;

    cout << "\n�̸� : " << name << '\n' << "�ּ� : " << address << '\n' << "���� : " << age << "��" << '\n';
    print('\n');
}
