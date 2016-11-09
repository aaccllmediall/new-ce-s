#ifndef SOME_H
#define SOME_H


template <typename T>
class Some
{
    public:
        Some();
        Some(const T x, const T y);
        Some(const Some<T> &a);
        friend double dist(const Some<T> a, const Some<T> b);
        friend Some operator+(const Some<T> a, const Some<T> b);

    private:
        T x, y;
};

#endif // SOME_H
