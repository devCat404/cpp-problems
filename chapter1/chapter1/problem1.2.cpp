#include <iostream>
#include <string>

using namespace std;

void problem2() {
    string dep;
    int id;
    string dream;
    cout << "�а� �Է�: ";
    getchar();
    getline(cin, dep);
    cout << "�й� �Է�: ";
    cin >> id;
    cout << "��� ���� �Է�: ";
    getchar();
    getline(cin, dream);

    cout << "\n�а� : " << dep << '\n' << "�й� : " << id << '\n' << "��� ���� : " << dream << '\n' << '\n';
}
