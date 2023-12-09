#include "solve.h"
#include <cmath>

std::tuple<double, double> solve(int a, int b, int c) {
    double discriminant = b * b - 4 * a * c;
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);

    // Возвращаем корни в порядке возрастания
    if (root1 < root2) {
        return std::make_tuple(root1, root2);
    }
    else {
        return std::make_tuple(root2, root1);
    }
}
