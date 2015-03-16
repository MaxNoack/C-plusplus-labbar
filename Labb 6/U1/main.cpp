#include <iostream>

using namespace std;

template<class TYPE>
void skrivUtFalt(TYPE a[], int e) {

    for(int i = 0; i<e; i++) {
        if(i < e-1)cout << a[i] << ", ";
        else cout << a[i];
        }
    }

int main() {
    int a[4] = {1,2,3,4};

    string b[6] = {"Kalle", "Eva", "Nisse", "Anna", "Ulf"};
    skrivUtFalt(a, 4);
    cout << endl;
    skrivUtFalt(b, 5);
    cout << endl;
    }
