#include <iostream>

using namespace std;

union data {
    uint32_t fourBytes;
    uint16_t twoBytes[2];
    uint8_t oneByte[4];
    };

int main() {

    data number;
    number.fourBytes = 32931847;
//    number.twoBytes[0] = 3293;
//    number.twoBytes[1] = 1847;
//    number.oneByte[0] = 32;
//    number.oneByte[1] = 93;
//    number.oneByte[2] = 18;
//    number.oneByte[3] = 47;
    cout << "En del: " << hex << (int)number.fourBytes << endl;
    cout << "Två delar: ";
    for(int i=0; i<2; i++) {
        cout << hex << (int)number.twoBytes[i] << " ";
        }
    cout << endl;
    cout << "Fyra delar: ";
    for(int j=0; j<4; j++) {
        cout << hex << (int)number.oneByte[j] << " ";
        }

    }
