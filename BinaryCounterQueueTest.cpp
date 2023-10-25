#include <iostream>
#include <stdexcept>
#include "Queue.h"
using namespace std;

void BinaryCounter(int n)
{
    Queue<int> q;
    q.enqueue(1);
    for (int i = 1; i < n; i++)
    {
        int v = q.dequeue();
        q.enqueue(v * 10);
        q.enqueue(v * 10 + 1);
        cout << v << endl;
    }
}

int main()
{
    BinaryCounter(1);
    cout << endl;

    BinaryCounter(4);
    cout << endl;

    BinaryCounter(8);
    cout << endl;

    BinaryCounter(12);
    cout << endl;

    BinaryCounter(20);
    cout << endl;

    return 0;
}