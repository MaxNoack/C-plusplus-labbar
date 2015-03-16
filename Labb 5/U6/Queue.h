#ifndef QUEUE_H
#define QUEUE_H
#include <stdexcept>


class Queue {
    private:
        int maxSize;    // Köns maximala storlek
        int currentSize;
        int *data;      // Data
        int head;       // index till nästa pos att läsa från
        int tail;       // index till nästa pos att skriva till
        int q [];
    public:
        Queue(int max=100);
        ~Queue();
        void clear();
        bool empty() const;
        bool full() const;
        int dequeue() throw (std::length_error);              //Hämta + avlägsna element, throw (length_error)
        void enqueue(int value) throw (std::length_error);    // throw (length_error)
        int length();
    };

#endif // QUEUE_H
