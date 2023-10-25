#include <iostream>
#include <stdexcept>
#include "DoublyLinkedList.h"

template <typename T>
class Queue
{
private:
    DoublyLinkedList<T> backing;

public:
    Queue() : backing() {}

    void enqueue(T value)
    {
        backing.push_tail(value);
    }

    T dequeue()
    {
        if (backing.is_empty())
        {
            throw std::runtime_error("Queue is empty");
        }

        return backing.pop_head();
    }

    T peek()
    {
        if (backing.empty())
        {
            throw std::runtime_error("Queue is empty");
        }
        return backing.get(0);
    }

    int size()
    {
        return backing.size();
    }
};