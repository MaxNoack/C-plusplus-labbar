#include "quicksort.h"


quicksort(double a[], int antal) {
    if (antal > 1) {
        // som delningstalet k väljs a[0]
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
    n1=0;        // undre gräns
    n2=antal-1;  // övre gräns
    while (n1 < n2) {
        // leta reda på första tal som är för stort i den vänstra gruppen
        while (n1<n2 && f[n1]<=k)
            n1++;
        // leta reda på första tal som är för litet i den högra gruppen
        while (n1<n2 && f[n2]>k)
            n2--;
        if (n1<n2)
            byt(f[n1], f[n2]);
        }
    if (f[n1] > k)  // normalfallet
        return n1;
    else
        return antal;  // om alla tal är <= k
    }


quicksort::~quicksort() {
    //dtor
    }
