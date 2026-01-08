def logistic_map(r, x0, n):
    x = x0
    values = []
    for _ in range(n):
        x = r * x * (1 - x)
        values.append(x)
    return values