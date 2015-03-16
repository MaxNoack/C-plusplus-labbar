#ifndef QUEUE_H
#define QUEUE_H
#include <stdexcept>

template <class T>
class Queue {
    private:
        int maxSize;    // Köns maximala storlek
        int currentSize;
        T *data;        // Data
        int head;       // index till nästa pos att läsa från
        int tail;       // index till nästa pos att skriva till
        T q [];
    public:
        Queue(int max=100){
            maxSize = max;
            this->head = 0;
            this->tail = 0;
            this->data = new T[maxSize];
            this->currentSize = 0;
        }
        ~Queue(){
            delete[] q;
        }
        void clear(){
            data[0] = NULL;
            this->head = 0;
            this->tail = 0;
            this->currentSize = 0;
        }
        bool empty() const{
            if(this->currentSize == 0) return true;
            return false;
        }
        bool full() const{
            if(this->currentSize >= maxSize) return true;
            return false;
        }
        T dequeue() throw (std::length_error){   //Hämta + avlägsna element, throw (length_error)
            if(empty()) throw std::length_error("queue is empty");

                T value = this->data[head];
                this->currentSize--;
                this->head++;
                return value;
        }
        void enqueue(T value) throw (std::length_error){    // throw (length_error)
            if(full()) throw std::length_error("queue is full");

                this->data[tail] = value;
                this->tail++;

                if(this->tail > this->maxSize){
                    this->tail = 0;
                }
                this->currentSize++;
        }
        int length(){
            return this->currentSize;
        }
    };

#endif // QUEUE_H
