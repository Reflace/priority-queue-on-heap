// Задание:
// Реализовать шаблон классов очередь с приоритетами. Элементы очереди организовать в виде пирамиды. 
// В шаблоне классов использовать алгоритмы STL для работы с пирамидами.
// Реализовать модульное тестирование методов и дружественных функций шаблона классов с помощью создания тестирующего проекта.
// Создать клиентское приложение и продемострировать работу библиотеки для очереди с приоритетами, 
// в которой элементами являются объекты класса (созданного в практическом занятии «Обобщенный алгоритм сортировки Шелла».).

#include <iostream>
#include "Parallelepiped.hpp"
#include "PriorityQueue.hpp"

using namespace std;

int main() {
    PriorityQueue<int> pq;
    cout << "Size: " <<pq.size() << std::endl;
    pq.push(3);
    pq.push(2);
    pq.push(1);
    pq.push(0);
    cout << "Size: " <<pq.size() << std::endl;
    cout << pq.pop() << endl;
    cout << pq.pop() << endl;
    cout << pq.pop() << endl;
    cout << pq.pop() << endl;
    cout << "Size: " <<pq.size() << std::endl;
    return 0;
}