// Задание:
// Реализовать шаблон классов очередь с приоритетами. Элементы очереди организовать в виде пирамиды. 
// В шаблоне классов использовать алгоритмы STL для работы с пирамидами.
// Реализовать модульное тестирование методов и дружественных функций шаблона классов с помощью создания тестирующего проекта.
// Создать клиентское приложение и продемострировать работу библиотеки для очереди с приоритетами, 
// в которой элементами являются объекты класса (созданного в практическом занятии «Обобщенный алгоритм сортировки Шелла».).

#include <iostream>
#include "Heap.hpp"
#include "Parallelepiped.hpp"
#include "PriorityQueue1.hpp"
#include <vector>

using namespace std;

int main() {
//  Heap<int> heap(5);
//  heap.Insert(3);
//  heap.Insert(7);
//  heap.Insert(1);
//  heap.Insert(4);
//  heap.Insert(2);
//  heap.Insert(9);
//
//  heap.Print();

//    vector<int> v;
//    v.push_back(1);
    PriorityQueue<int> pq;
    pq.push_back(1);
    cout << pq.pop() << endl;

    return 0;
}