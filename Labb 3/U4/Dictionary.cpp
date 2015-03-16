#include "dictionary.h"
#include <vector>
#include <cstring>
#include <iostream>
#include <iomanip>

Dictionary::Dictionary() {
    }

void Dictionary::AddWord(const Word& word) {

    dict.push_back(word);
    }

string Dictionary::TranslateWord(char *sw) {
    string eng;
    for(Word w : dict) {
        if(strcmp(sw, w.get_sw()) == 0) {
            eng = w.get_eng();
            return eng;
            }
        }
        return "No translation found";
    }

void Dictionary::printDictionary(){
    for(Word w : dict) {
        cout << w.get_sw() << "\t " << w.get_eng() << endl;
    }
}
