#include <iostream>
#include <set>

using namespace std;

template <typename T>
class Stack
{
    public:
        Stack();
        bool empty();
        void push(const T &item) {
            x.insert(item);
        };
        T &top() {
            
        };
        void pop();

    private:
        set<T> x;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
