def factorial(n):
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result


def combination(n, k):
    return factorial(n) // (factorial(k) * factorial(n - k))


def permutation(n, k):
    return factorial(n) // factorial(n - k)