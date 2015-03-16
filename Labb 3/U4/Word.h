#ifndef WORD_H
#define WORD_H


class Word {
    public:
        Word(char *sw, char *eng); //Svenskt sw, engelskt eng
        Word(const Word& word);
        ~Word();
        const char *get_sw() const; //H�mta svenskt ord
        const char *get_eng() const; //H�mta engelsk �vers�ttning
    private:
        char *swedish;
        char *english;
    };

#endif // WORD_H
