#include <iostream>
#include <cstring>

#define print(x) cout << x
#define loop(i, a, b) for(int i = a; i < b; i++)

using namespace std;

void problem14() {
    int income = 0;

    while (true) {
        char coffee[100];
        int num;

        print("���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n");
        print("�ֹ�: ");
        cin >> coffee >> num;
    
        if (strcmp(coffee, "����������") == 0 ) {
            printf("%d���Դϴ�.\n", 2000 * num);
            income += 2000 * num;
        }
        else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
            printf("%d���Դϴ�.\n", 2300 * num);
            income += 2300 * num;
        }
        else if (strcmp(coffee, "īǪġ��") == 0) {
            printf("%d���Դϴ�.\n", 2500 * num);
            income += 2500 * num;
        }
        if (income >= 20000) {
            printf("���� %d���� �Ǹ��Ͽ� �������� �մϴ�.\n\n", income);
            break;
        }
    }
}
