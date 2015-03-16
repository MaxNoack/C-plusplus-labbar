#include "Queue.h"
#include <stdexcept>

template <class T>
Queue<T>::Queue(int max) {
    maxSize = max;
    this->head = 0;
    this->tail = 0;
    this->data = new T[maxSize];
    this->currentSize = 0;
    }
template <class T>
void Queue<T>::clear() {
    data[0] = NULL;
    this->head = 0;
    this->tail = 0;
    this->currentSize = 0;
    }
template <class T>
bool Queue<T>::empty() const {
    if(this->currentSize == 0) return true;
    return false;
    }
template <class T>
bool Queue<T>::full() const {
    if(this->currentSize >= maxSize) return true;
    return false;
    }
template <class T>
T Queue<T>::dequeue() throw (std::length_error) {        //Hämta + avlägsna element, throw (length_error)
    if(empty()) throw std::length_error("queue is empty");

        int value = this->data[head];
        this->data[head] = 0;
        this->currentSize--;
        this->head++;
        return value;
    }

template <class T>
void Queue<T>::enqueue(T k) throw (std::length_error) {  // throw (length_error)
    if(full()) throw std::length_error("queue is full");

        this->data[tail] = k;
        this->tail++;

        if(this->tail > this->maxSize){
            this->tail = 0;
        }
        this->currentSize++;
        }

template <class T>
int Queue<T>::length() {
    return this->currentSize;
    }

template <class T>
Queue<T>::~Queue() {
    delete[] q;
    }
