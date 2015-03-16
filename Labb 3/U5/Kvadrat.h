#ifndef KVADRAT_H
#define KVADRAT_H

class Kvadrat
{
    public:
        Kvadrat();
        Kvadrat(int s);
        Kvadrat(const Kvadrat& k);

        int getArea();
        void operator++();
        void operator--();
        void operator+(int t);
        void operator-(int s);
        bool operator== (const Kvadrat& l);
        friend bool operator < (const Kvadrat& k, const Kvadrat& l);
        friend bool operator > (const Kvadrat& k, const Kvadrat& l);

    protected:
    private:
        int side;
};

#endif // KVADRAT_H
