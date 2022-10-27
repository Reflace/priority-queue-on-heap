#pragma once

#include <iostream>

template<typename T>
class PriorityQueue {
private:
    T* value;
    double* priority;
    size_t count = 0;
public:
    PriorityQueue(): count(0) {}
    PriorityQueue(const PriorityQueue&);
    ~PriorityQueue();

    inline int size() { return count; }

    void push(T, int);
    T pop();
    void clear();

    PriorityQueue operator=(const PriorityQueue&);
    // friend std::ostream& operator<<(std::ostream& stream, const PriorityQueue&);
};

template<typename T>
PriorityQueue<T>::PriorityQueue(const PriorityQueue<T>& pq) {
    value = new T[pq.count];
    priority = new double[pq.count];
    count = pq.count;

    for(int i = 0; i < count; i++) {
        value[i] = pq.value[i];
        priority[i] = pq.priority[i];
    }
}

template<typename T>
PriorityQueue<T>::~PriorityQueue() {
    if(count > 0) {
        delete[] value;
        delete[] priority;
    }
}

template<typename T>
void PriorityQueue<T>::push(T item, int pri) {
    T* value_temp = new T[count + 1];
    double* priority_temp = new double[count + 1];

    int pos = 0;
    if(count > 0) {
        while(pos < count) {
            if(priority[pos] >= pri) pos++;
        }
    }

    for(int i = 0; i < pos; i++) {
        value_temp[i] = value[i];
        priority_temp[i] = priority[i];
    }

    value_temp[pos] = item;
    priority_temp[pos] = pri;

    for(int i = pos + 1; i < count + 1; i++) {
        value_temp[i] = value[i - 1];
        priority_temp[i] = priority[i - 1];
    }

    if(count > 0) {
        delete[] value;
        delete[] priority;
    }

    value = value_temp;
    priority = priority_temp;
    count++;
}

template<typename T>
T PriorityQueue<T>::pop() {
    if(count == 0) return 0;

    T* value_temp = new T[count - 1];
    double* priority_temp = new double[count - 1];

    T item = value[0];

    for(int i = 0; i < count - 1; i++) {
        value_temp[i] = value[i];
        priority_temp[i] = priority[i];
    }

    if(count > 0) {
        delete[] value;
        delete[] priority;
    }

    value = value_temp;
    priority = priority_temp;
    count--;

    return item;
}

template<typename T>
void PriorityQueue<T>::clear() {
    if(count > 0) {
        delete[] value;
        delete[] priority;
        count = 0;
    }
}

template<typename T>
PriorityQueue<T> PriorityQueue<T>::operator=(const PriorityQueue& pq) {
    if(count > 0) {
        delete[] value;
        delete[] priority;
        count = 0;
    }

    value = new T[pq.count];
    priority = new double[pq.count];
    count = pq.count;

    for(int i = 0; i < count; i++) {
        value[i] = pq.value[i];
        priority[i] = pq.priority[i];
    }

    return *this;
}

// template<typename T>
// std::ostream& PriorityQueue<T>::operator<<(std::ostream& stream, const PriorityQueue<T>& pq) {
    
// }