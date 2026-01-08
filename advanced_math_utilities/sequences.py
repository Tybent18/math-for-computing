def fibonacci(n):
    if n <= 1:
        return n
    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b


def tribonacci(n):
    seq = [0, 0, 1]
    for i in range(3, n):
        seq.append(seq[i-1] + seq[i-2] + seq[i-3])
    return seq[:n]