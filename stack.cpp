#include "Stack.h"
#include <set>
#include <iostream>

#define ERROR "Pila vacia"

template <typename T>
Stack<T>::Stack()
{
    std::set<T> x1;
    this->x=x1;
}

template <typename T>
bool Stack<T>::empty()
{
    if (x.begin()==NULL)
        return true;
    else
        return false;
}

template <typename T>
void Stack<T>::push(const T &item)
{
    x.insert(item);
}

template <typename T>
T &Stack<T>::top()
{
    std::cout << x.end() << std::endl;
}

template <typename T>
void Stack<T>::pop()
{
    if (x.empty()==false)
        x.remove(x.end());
    else
        return ERROR;
}

template <typename T>
Stack<T> Stack<T>::operator+(const Stack<T> &a, const Stack<T> &b)
{
    Stack<T> c();
    
    
}
