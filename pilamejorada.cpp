#include <iostream>
#include <vector>

#define ERROR "Pila vacia"

using namespace std;

template <typename T>
class Stack
{
    public:
        Stack();
        bool empty();
        void push(T &item);
        T &top();
        void pop();
		friend Stack<T> operator+(Stack<T> & , Stack<T> & );
    
	private:
        vector<T> x;
};

template <typename T>
Stack<T>::Stack()
{
    vector<T> x1;
    this->x=x1;
};

template <typename T>
bool Stack<T>::empty()
{
    if (x[0]==NULL)
        return true;
    else
        return false;
};

template <typename T>
void Stack<T>::push(T &item)
{
    x.push_back(&item);
};

template <typename T>
T &Stack<T>::top()
{
    int i=x.size();
    cout << x[i] << endl;
};

template <typename T>
void Stack<T>::pop()
{
    int i=x.size();

    if (x.empty()==false)
        x[i]=NULL;
    else
        return ERROR;
};

template <typename T>
Stack<T> operator+(Stack<T> &a, Stack<T> &b)
{
	Stack<T> aux={};
	int min;
	
	if (a.x.size()<b.x.size())
		min=a.x.size();
	else
		min=b.x.size();
	for (int i=0; i<min; i++)
		aux.push_back(a.x[i]+b.x[i]);
	return aux;
};

int main()
{
	Stack<float> p();
	return 0;
}
