#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack
{
    public:
        Stack();
        virtual ~Stack();
        Stack(Stack & );
        void push(T );
        T pop();
        void getsize();
        void print();

    private:
        int size;
        T *data;
        void resize(int);
        T vacio() { return -1; }
};

#endif // STACK_H
