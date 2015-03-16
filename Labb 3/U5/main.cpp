#include <iostream>

#include "kvadrat.h"

using namespace std;

int main() {
    Kvadrat k1(4);
    Kvadrat k2(4);

    cout << "Area of k2: " << k2.getArea() << endl;
    cout << "Area of k1: " << k1.getArea() << endl;

//    ++k2;
//    cout << "Area of k2 with side + 1: " << k2.getArea() << endl;
//
//    --k2;
//    cout << "Area of k2 with side - 1: " << k2.getArea() << endl;
//
//    k2 + 2;
//    cout << "Area of k2 with side + 2: " << k2.getArea() << endl;
//
//    k2 - 3;
//    cout << "Area of k2 with side - 3: " << k2.getArea() << endl;
//
//    cout << "k1 = " << k1.getArea() << "\n" << "k2 = " << k2.getArea() << "\n" << endl;

    if(k1==k2){
        cout << "k1 equal to k2" << endl;
    }
    if(k1>k2){
        cout << "k1 bigger than k2" << endl;
    }
    if(k1<k2){
        cout << "k1 smaller than k2" << endl;
    }
    return 0;
    }
