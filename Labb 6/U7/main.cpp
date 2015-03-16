#include <iostream>
#include <unistd.h>

using namespace std;

uint16_t packedDate(int year, int month, int day) {
    short int result = 0;
    year = year << 9;
    month = month << 5;
    result = year | month | day;

    return result;
    }

void unpackDate(short int pack, int &year, int &month, int &day) {
    int y = (pack & 0xFE00) >> 9;
    int m = (pack & 0x1E0) >> 5;
    int d = (pack & 0x1F);
    year = y;
    month = m;
    day = d;
    }

int main() {

    int year = 45, month = 12, day = 04;
    short int packet = packedDate(year, month, day);
    cout << "Before packing: " << year << " " << month << " " << day << endl;

    unpackDate(packet, year, month, day);
    cout << "Unpacked: " << year << " " << month << " " << day << endl;


    }
