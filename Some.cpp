#include "Some.h"

template <typename T>
Some<T>::Some(const T x,const T y)
{
    this->x=x;
    this->y=y;
}
template <typename T>
Some<T>::Some()
{
    this->x=0;
    this->y=0;
}
template <typename T>
Some<T>::Some(const Some<T> &a)
{
    this->x=a.x;
    this->y=a.y;
}
template <typename T>
Some<T>::dist(const Some<T> a, const Some<T> b)
{
     x1, y1, c;

    x1=abs(a.x-b.x);
    y1=abs(a.y-b.y);
    c=x1*x1+y1*y1;

    return sqtr(c);
}
template <typename T>
Some<T>::operator+(const Some<T> a, const Some<T> b)
{
    Some aux={0, 0};
    aux.x=a.x+b.y;
    aux.y=a.y+b.y;
    return aux;
}
