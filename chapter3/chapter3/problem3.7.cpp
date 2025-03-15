#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <string>

using namespace std;

class SelectableRandom {
private:
    bool even;  

public:
    SelectableRandom(bool choice) {  
        even = choice;
        srand(time(0));
    }

    int next() {
        int n;
        do {
            n = rand() % 32768;  
        } while ((n % 2 == 0) != even);  
        return n;
    }

    int nextInRange(int a, int b) {
        if (a > b) swap(a, b);  

        int m;
        do {
            m = a + rand() % (b - a + 1);  
        } while ((m % 2 == 0) != even);  
        return m;
    }
};

void problem7() {
    int choice;
    cout << "¦���� �����Ϸ��� '1', Ȧ���� �����Ϸ��� '0'�� �Է��ϼ���: ";
    cin >> choice;

    string evenOdd;

    if (!choice) {
        evenOdd = "Ȧ��";
    }
    else {
        evenOdd = "¦��";
    }

    SelectableRandom r(choice);  

    cout << "\n-- 0���� 32767 ������ ���� " << evenOdd << "10�� --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.next() << " ";
    }
    cout << endl;

    cout << "\n-- 0���� 32767 ������ ���� " << evenOdd << "10�� --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.nextInRange(2, 9) << " ";
    }
    cout << endl << endl;
}
