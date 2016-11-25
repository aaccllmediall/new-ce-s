#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack
{
    public:
        Stack();
        bool empty();
        void push(const T &item);
        T &top();
        void pop();
        friend Stack<T> operator+(const Stack<T> & , const Stack<T> & );

    private:
        T x;
};

#endif // STACK_H

