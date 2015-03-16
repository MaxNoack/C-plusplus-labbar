#include "quicksort.h"


quicksort(double a[], int antal) {
    if (antal > 1) {
        // som delningstalet k v�ljs a[0]
        int grans = dela_upp(a, antal, a[0]);
        byt(a[0], a[grans-1]);  // placera k mellan grupperna
        quicksort(a, grans-1);
        quicksort(a+grans, antal-grans);
        }
    }

void quicksort::byt(double& x, double& y) {
    double temp;
    temp=x;
    x=y;
    y=temp;
    }

int quicksort::dela_upp(double f[], int antal, double k) {
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


quicksort::~quicksort() {
    //dtor
    }
