#include <iostream>

#define print(x) cout << x
#define loop(i, a, b) for(int i = a; i < b; i++)

using namespace std;

void problem7() {
    
    getchar();

    while (true) {
        char option[50];
        print("�����ϰ� ������ yes�� �Է�: ");
        cin.getline(option, 50, '\n');

        if (strcmp(option, "yes") == 0) {
            print("����\n");
            break;
        }
    }
    print("\n");
    
}
