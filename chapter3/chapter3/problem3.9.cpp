
//������(Oval.cpp)

#include "Oval.h"

Oval::Oval() {
    width = 1;
    height = 1;
}

Oval::Oval(int w, int h) {
    width = w;
    height = h;
}

Oval::~Oval() {
    cout << "Oval �Ҹ�: width = " << width << ", height = " << height << endl;
}

int Oval::getWidth() {
    return width;
}

int Oval::getHeight() {
    return height;
}

void Oval::set(int w, int h) {
    width = w;
    height = h;
}

void Oval::show() {
    cout << "width = " << width << ", height = " << height << endl;
}

//������(main.cpp)

int problem9() {
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << "," << b.getHeight() << endl;

    return 0;  
}
