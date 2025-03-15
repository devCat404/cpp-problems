#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

class Random {
public:
    Random() {  
        srand((unsigned)time(0));
    }

    int next() {  
        return rand();
    }

    int nextInRange(int a, int b) {  
        return a + rand() % (b - a + 1);
    }
};

void problem5() {
    Random r;  

    cout << "\n-- 0���� RAND_MAX(32767) ������ ������ ���� 10�� --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.next() << " ";
    }
    cout << endl;

    cout << "\n\n-- 2���� 4 ������ ������ ���� 10�� --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.nextInRange(2, 4) << " ";
    }
    cout << endl << endl;
}
