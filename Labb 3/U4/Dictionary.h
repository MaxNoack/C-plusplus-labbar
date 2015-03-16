#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <vector>
#include <string>
#include "word.h"

using namespace std;

class Dictionary
{
    public:
        Dictionary();
        void AddWord(const Word& word);
        string TranslateWord(char *sw);
        void printDictionary();
    private:
        vector<Word> dict;
};

#endif // DICTIONARY_H
