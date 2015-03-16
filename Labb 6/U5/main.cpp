#include <iostream>
#include "Queue.h"
using namespace std;


int main() {
    int s;
    cout << "Type your max size?" << endl;
    cin >> s;


    Queue<int> q(s);
    for(int i=0; i<s; i++) {
        try {
            q.enqueue(i);
            }
        catch(length_error e) {
            cout << e.what() << endl;
            }
        }

    //Check size function
    if(!q.empty()) cout << "Queue has values." << endl;

    if(q.full()) cout << "Queue is full." << endl;

    for(int i=0; i<s; i++) {
        try {
            cout << "index nr" << i << ": " << q.dequeue() << endl;
            }
        catch(length_error e) {
            cout << e.what() << endl;
            }
        }
    if(q.empty()) cout << "Queue empty." << endl;
    }
