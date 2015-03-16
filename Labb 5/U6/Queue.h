#ifndef QUEUE_H
#define QUEUE_H
#include <stdexcept>


class Queue {
    private:
        int maxSize;    // K�ns maximala storlek
        int currentSize;
        int *data;      // Data
        int head;       // index till n�sta pos att l�sa fr�n
        int tail;       // index till n�sta pos att skriva till
        int q [];
    public:
        Queue(int max=100);
        ~Queue();
        void clear();
        bool empty() const;
        bool full() const;
        int dequeue() throw (std::length_error);              //H�mta + avl�gsna element, throw (length_error)
        void enqueue(int value) throw (std::length_error);    // throw (length_error)
        int length();
    };

#endif // QUEUE_H
