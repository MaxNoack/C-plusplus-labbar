template <class T>
void byt(T& x, T& y) {
    T temp;
    temp=x;
    x=y;
    y=temp;
    }

// Delar upp f�ltet f i tv� delar s� att alla tal i den v�nstra delen
// �r <= k och alla tal i den h�gra delen �r > k.
// Ger som resultat index f�r gr�nsen mellan de tv� delarna,
// dvs. f�rsta index i den h�gra gruppen
// J�mf�r med �vningsexempel nr. 2-19.

template <class T>
int dela_upp(T f[], int antal, T k) {
    int n1, n2;
    n1=0;        // undre gr�ns
    n2=antal-1;  // �vre gr�ns
    while (n1 < n2) {
        // leta reda p� f�rsta tal som �r f�r stort i den v�nstra gruppen
        while (n1<n2 && f[n1]<=k)
            n1++;
        // leta reda p� f�rsta tal som �r f�r litet i den h�gra gruppen
        while (n1<n2 && f[n2]>k)
            n2--;
        if (n1<n2)
            byt(f[n1], f[n2]);
        }
    if (f[n1] > k)  // normalfallet
        return n1;
    else
        return antal;  // om alla tal �r <= k
    }

template <class T>
void quicksort(T a[], int antal) {
    if (antal > 1) {
        // som delningstalet k v�ljs a[0]
        int grans = dela_upp(a, antal, a[0]);
        byt(a[0], a[grans-1]);  // placera k mellan grupperna
        quicksort(a, grans-1);
        quicksort(a+grans, antal-grans);
        }
    }

#include <iostream>
using namespace std;

main() {
    int antal=5;
    int f[antal];
    int value;
    cout << "Skriv in " << antal << " tal" << endl;
    for (int i=0; i<antal; i++){
        cin >> value;
        f[i] = value;
    }

    quicksort(f, antal);

    for (int j=0; j<antal; j++)
        cout << f[j] << endl;
    }
