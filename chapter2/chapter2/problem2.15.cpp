#include <iostream>

#define print(x) cout << x
#define loop(i, a, b) for(int i = a; i < b; i++)

using namespace std;

void problem15() {
    while (true) {
        int option = 0;

        print("���� �̿�� 1, ����� 0 �Է�: ");
        cin >> option;

        if (option == 0) {
            printf("���α׷� ����.\n\n");
            break;
        }

        int a;
        int b;
        char p;

        print("���� �� �Է�: ");
        cin >> a;
        getchar();
        cin >> p;
        getchar();
        cin >> b;

        int res = 0;


        switch (p) {
        case '+' :
            res = a + b;
            printf("%d %c %d= %d\n\n", a, p, b, res);
            break;
        case '*':
            res = a * b;
            printf("%d %c %d= %d\n\n", a, p, b, res);
            break;
        case '-':
            res = a - b;
            printf("%d %c %d= %d\n\n", a, p, b, res);
            break;
        case '/':
            res = a / b;
            printf("%d %c %d= %d\n\n", a, p, b, res);
            break;
        case '%':
            res = a % b;
            printf("%d %c %d= %d\n\n", a, p, b, res);
            break;
        default :
            break;
        }
    }
}
