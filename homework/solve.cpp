#include "solve.h"
#include <iostream>
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, c;

    // Введите коэффициенты квадратного уравнения
    std::cout << "Введите коэффициент a: ";
    std::cin >> a;

    std::cout << "Введите коэффициент b: ";
    std::cin >> b;

    std::cout << "Введите коэффициент c: ";
    std::cin >> c;

    auto roots = solve(a, b, c);

    std::cout << "Корни уравнения: " << std::get<0>(roots) << " и " << std::get<1>(roots) << std::endl;

    return 0;
}
