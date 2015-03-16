#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char file1[40];
    char file2[40];

    cout << "Ange första filens namn: ";
    cin >> file1;
    ifstream f1;
    f1.open(file1, ios::binary);
    cout << "Ange andra filens namn: ";
    cin >> file2;
    ifstream f2;
    f2.open(file2, ios::binary);

    char a;
    char b;
    bool boo = true;
    while(f1.get(a) && f2.get(b)) {
        if(a != b) {
            cout << "Filerna är inte lika." << endl;
            boo = false;
            break;
            }
        }
        if(boo) cout << "Filerna är lika!" << endl;

    f1.close();
    f2.close();
    }
