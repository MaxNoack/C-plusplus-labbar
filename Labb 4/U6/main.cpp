#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    ifstream namnlista;
    ofstream email;
    string line;
    string mailad;

    namnlista.open("namnlista.txt");
    email.open("email.txt");


    if (namnlista.is_open() && email.is_open()) {
        while (getline(namnlista, line)) {
            int pos = line.find(" ");
            mailad += line.substr (0, pos);
            mailad += '.';
            mailad += line.substr (pos+1);
            email << mailad;
            email << "@gronkoping.se";
            email << endl;
            mailad = "";
            }
        }
    namnlista.close();
    email.close();
    }
