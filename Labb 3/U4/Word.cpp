#include "Word.h"
#include <cstring>

Word::Word(char *sw, char *eng) {
    swedish = new char[strlen(sw)+1];
    strcpy(swedish, sw);
    english = new char[strlen(eng)+1];
    strcpy(english, eng);
    }

Word::Word(const Word& word) {
    swedish = new char[strlen(word.swedish)+1];
    strcpy(swedish, word.swedish);
    english = new char[strlen(word.english)+1];
    strcpy(english, word.english);
    }

Word::~Word() {
    delete swedish;
    delete english;
    }

const char *Word::get_sw() const {
    return swedish;
    }

const char *Word::get_eng() const {
    return english;
    }
