#include "Queue.h"
#include <stdexcept>

Queue::Queue(int max) {
    maxSize = max;
    this->head = 0;
    this->tail = 0;
    this->data = new int [maxSize];
    this->currentSize = 0;
    }

void Queue::clear() {
    data[0] = NULL;
    this->head = 0;
    this->tail = 0;
    this->currentSize = 0;
    }
bool Queue::empty() const {
    if(this->currentSize == 0) return true;
    return false;
    }
bool Queue::full() const {
    if(this->currentSize >= maxSize) return true;
    return false;
    }
int Queue::dequeue() throw (std::length_error) {        //Hämta + avlägsna element, throw (length_error)
    if(empty()) throw std::length_error("queue is empty");

        int value = this->data[head];
        this->data[head] = 0;
        this->currentSize--;
        this->head++;
        return value;
    }
void Queue::enqueue(int value) throw (std::length_error) {  // throw (length_error)
    if(full()) throw std::length_error("queue is empty");

        this->data[tail] = value;
        this->tail++;

        if(this->tail > this->maxSize){
            this->tail = 0;
        }
        this->currentSize++;
        }
int Queue::length() {
    return this->currentSize;
    }

Queue::~Queue() {
    //dtor
    }
