#pragma once

#include <iostream>

using namespace std;

template<typename T>
class Heap {
private:
    int count;
    int size;
    T* items;
public:
    Heap(int size) {
        count = 0;
        items = new T[this->size = size];
    }

    void Insert(const T& element);

    T& operator [] (int i) {
        return items[i];
    }
    const T& operator [] (int i) const {
        return items[i];
    }

    void Print();
};

template<class T>
void Heap<T>::Insert(const T& elem) {
    if(count >= size) return;

    int curIndex = count++;
    int parentIndex;

    while(curIndex > 0 && elem < items[parentIndex = (curIndex - 1) / 2]) {
        items[curIndex] = items[parentIndex];
        curIndex = parentIndex;
    }

    items[curIndex] = elem;
}

template<class T>
void Heap<T>::Print() {
    for(int i = 0; i < count; i++) {
        cout << items[i] << " ";
    }
    cout << endl;
}