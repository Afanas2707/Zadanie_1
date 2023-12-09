def solve(a, b, c):
    D = b ** 2 - 4 * a * c
    x1 = (-b + (D ** 0.5)) / (2 * a)
    x2 = (-b - (D ** 0.5)) / (2 * a)
    return sorted([x1, x2])


# Пример использования
a, b, c = 1, -3, 2
roots = solve(a, b, c)
print("Корни: ", roots)
