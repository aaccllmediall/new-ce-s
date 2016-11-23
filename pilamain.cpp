#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack<int> a;
    a.print();

    for(int e=0; e<8; e++)
        a.push(e);
    a.print();

    a.push(5000.23);
    a.print();

    a.push(45);
    a.print();

    for(int e=0; e<10; e++){
        cout << a.pop << endl;
        a.print();
        a.getsize();
    }
    return 0;
}
