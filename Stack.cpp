#ifndef STACK_H
#define STACK_H
#include <set>

template <typename T>
class Stack
{
    public:
        Stack();
        void pop();
        void push(const T & );
        T &top();
        bool empty();



    private:
        T com;

};

#endif // STACK_H
