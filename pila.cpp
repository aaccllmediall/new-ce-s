#include "Stack.h"

#define ERROR "La pila esta vacia"

using namespace std;

template <typename T>
Stack<T>::Stack()
{
    size=0;
    data=new T[size];
}

template <typename T>
Stack<T>::~Stack()
{
    delete []data;
}

template <typename T>
Stack<T>::Stack(Stack &o)
{
    size=o.size;
    data=new T[size];
}

template <typename T>
void Stack<T>::resize(int newsize)
{
    size=newsize;
    T *newdata=new T[newsize];
    for(int e=0; e<size; e++)
        newdata[e]=data[e];
    delete []data;
    data=newdata;
}

template <typename T>
T Stack<T>::pop()
{
    T temp=data[size-1];
    resize(size-1);
    return (size>0) ? temp : vacio();
}

template <typename T>
void Stack<T>::getsize()
{
    cout << size << endl;
}

template <typename T>
void Stack<T>::print()
{
    for(int e=0; e<size; e++)
        cout << data[e] << " " ;
    cout << endl;
}
