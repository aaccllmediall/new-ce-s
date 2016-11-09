#include <iostream>

template <typename T>
T mini(T x, T y)
{
    T minimo;
    if (x<y)
        minimo=x;
    else
        minimo=y;
    return minimo;
}

int main()
{
    float a, b;
    std::cout << "Encontrando el mayor:" << std::endl;
    std::cout << "Coloque primer termino: ";
    std::cin >> a;
    std::cout << "coloque segundo termino: ";
    std::cin >> b;
    std::cout << "el minimo de los dos es: " << mini(a, b) << std::endl;

    return 0;
}
