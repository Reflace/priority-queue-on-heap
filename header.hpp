#pragma once

// Алгоритм make_heap
// Алгоритм make_heap() преобразовывает элементы диапазона [beg;end) в пирамиду.
template<typename RandomAccessIterator>
void make_heap (RandomAccessIterator beg, RandomAccessIterator end);

template<typename RandomAccessIterator, typename BinaryPredicate>
void make_heap(RandomAccessIterator beg, RandomAccessIterator end, BinaryPredicate op);

// Алгоритм push_heap
// Если диапазон [beg, end-1) представляет собой пирамиду, алгоритм push_heap() 
// переставляет элементы диапазона [beg, end), делая из него пирамиду.
template<typename RandomAccessIterator>
void push_heap(RandomAccessIterator beg, RandomAccessIterator end);

template<typename RandomAccessIterator, typename BinaryPredicate>
void push_heap(RandomAccessIterator beg, RandomAccessIterator end, BinaryPredicate op);

// Алгоритм pop_heap
// Если диапазон [beg, end) представляет собой пирамиду, pop_heap() обменивает 
// значение в позиции beg со значением в позиции end-1 
// и выполняет перестановку элементов в диапазоне [beg, end-1), превращая его в пирамиду.
template<typename RandomAccessIterator>
void pop_heap(RandomAccessIterator beg, RandomAccessIterator end);

template<typename RandomAccessIterator, typename BinaryPredicate>
void pop_heap(RandomAccessIterator beg, RandomAccessIterator end, BinaryPredicate op);

// Алгоритм sort_heap
// Обе формы алгоритма преобразовывают пирамиду [beg,end) в упорядоченную последовательность.
// После выполнения алгоритма диапазон [beg,end) перестает быть пирамидой.
// Для корректной работы алгоритма элементы диапазона [beg, end) должны образовывать 
// пирамиду (в соответствии с тем же критерием сортировки).
template< typename RandomAccessIterator>
void sort_heap(RandomAccessIterator beg, RandomAccessIterator end);

template<typename RandomAccessIterator, typename BinaryPredicate>
void sort_heap(RandomAccessIterator beg, RandomAccessIterator end, BinaryPredicate op);

// Алгоритм is_heap
// Алгоритм is_heap() проверяет, образуют ли элементы диапазона [beg,end) пирамиду.
// Если диапазон пустой или содержит только один элемент, алгоритм возвращает значение true.
template<typename RandomAccessIterator>
bool is_heap (RandomAccessIterator beg, RandomAccessIterator end);

template<typename RandomAccessIterator, typename BinaryPredicate>
bool is_heap (RandomAccessIterator beg, RandomAccessIterator end, BinaryPredicate op);

// Алгоритм is_heap_until
// Алгоритм is_heap_until() возвращает позицию первого элемента в диапазоне [beg,end), 
// который нарушает свойство пирамидальности или позицию end, если такого элемента нет.
// Если диапазон пустой или содержит только один элемент, алгоритм возвращает позицию end.
template<typename RandomAccessIterator>
RandomAccessIterator is_heap_until(RandomAccessIterator beg, RandomAccessIterator end);

template<typename RandomAccessIterator, typename BinaryPredicate>
RandomAccessIterator is_heap_until(RandomAccessIterator beg, RandomAccessIterator end, BinaryPredicate op);