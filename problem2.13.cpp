#include <iostream>

#define print(x) cout << x
#define loop(i, a, b) for(int i = a; i < b; i++)

using namespace std;

void problem13() {
    print("*****  �¸��忡 ���� ���� ȯ���մϴ�.  *****\n");

    while (true) {
        int select;
        print("\n«��: 1, ¥���: 2, ������: 3, ����: 4 >>> ");
        cin >> select;

        int option = 0;
        switch (select) {
        case 1:
            print("���κ� : ");
            cin >> option;
            printf("«�� %d�κ� ���Խ��ϴ�.\n", option);
            break;
        case 2:
            print("���κ� : ");
            cin >> option;
            printf("¥��� %d�κ� ���Խ��ϴ�.\n", option);
            break;
        case 3:
            print("���κ� : ");
            cin >> option;
            printf("������ %d�κ� ���Խ��ϴ�.\n", option);
            break;
        case 4:
            print("���� ����.\n");
            break;
        default:
            print("�ٽ� �Է�\n");
            break;
        }

        if (select == 4) {
            print('\n');
            break;
        }
    }
}
