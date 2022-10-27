#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
class PriorityQueue : public std::vector<T> {
private:
    void sive_up(size_t start) {
        while (this[start] > this[start / 2]) {
            //std::swap(this[start], this[start / 2]);
            T tmp = this->at(start);
            this->at(start) = this->at(start / 2);
            this->at(start / 2) = tmp;
            start /= 2;
        }
    }
public:
    void push(const T&);
    T pop();
};

template<typename T>
void PriorityQueue<T>::push(const T& item) {
    std::cout << this->size() << std::endl;
    this->push_back(item);
    this->sive_up(this->size() - 1);
}

template<typename T>
T PriorityQueue<T>::pop() {
    T tmp = this->front();
    std::swap(this->front(), this->back());
    this->pop_back();
    this->sive_up(this->size() - 1);
    return tmp;
}