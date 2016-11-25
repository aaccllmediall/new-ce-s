#include "Stack.h"
#include <vector>
#include <iostream>

#define ERROR "Pila vacia"

template <typename T>
Stack<T>::Stack()
{
    std::vector<T> x1;
    this->x=x1;
}

template <typename T>
bool Stack<T>::empty()
{
    if (x[0]==NULL)
        return true;
    else
        return false;
}

template <typename T>
void Stack<T>::push(const T &item)
{
    x.push_back(item);
}

template <typename T>
T &Stack<T>::top()
{
    int i=x.size();
    std::cout << x[i] << std::endl;
}

template <typename T>
void Stack<T>::pop()
{
    int i=x.size();

    if (x.empty()==false)
        x[i]=NULL;
    else
        return ERROR;
}

template <typename T>
Stack<T> Stack<T>::operator+(const Stack<T> &a, const Stack<T> &b)
{
    Stack<T> c();


}
