#include <iostream>

#define print(x) cout << x

using namespace std;

void problem1();
void problem2();
void problem3();
void problem4();

int main() {
    while (true) {
        int choice;

        print(" ���� ����(1~4), 5���� ���� ����: ");
        cin >> choice;

        switch (choice) {
        case 1: 
            problem1(); 
            break;
        case 2: 
            problem2(); 
            break;
        case 3:
            problem3();
            break;
        case 4:
            problem4();
            break;
        case 5:
            print("���α׷� ����.");
            return 0;
        default: 
            print("�߸��� �Է�");
            return 0;
        }
    }

    return 0;
}
