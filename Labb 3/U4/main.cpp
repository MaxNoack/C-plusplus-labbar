#include <iostream>
#include <string>

#include "dictionary.h"
#include "Word.h"
using namespace std;


int main() {
    Dictionary dict;


    while(true) {

        char val;
        char sw[20], eng[20];
        cout << "\nChoose one of the following numbers: " << endl;
        cout << "1: Add swedish translation." << endl;
        cout << "2: Search for english tranlation." << endl;
        cout << "3: Print all translations. \n" << endl;

        cin >> val;
        switch(val) {
            case '1':
                {
                cout << "Write a swedish word (max length 20 characters): ";
                cin >> sw;
                cout << "Write the translation (max length 20 characters): ";
                cin >> eng;
                Word a(sw, eng);
                dict.AddWord(a);
                break;
                }
            case '2':
                char sw[30];
                cout << "Write a word you want to translate to english: ";
                cin >> sw;
                cout << dict.TranslateWord(sw) << endl;
                break;
            case '3':
                dict.printDictionary();
                break;
            default:
                cout << "Illegal command. Please choose a number between 1 and 3." << endl;
                break;
            }
        }
    }
