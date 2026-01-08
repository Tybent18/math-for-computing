def numerical_derivative(f, x, h=1e-5):
    return (f(x + h) - f(x - h)) / (2 * h)


def gradient_descent(f, df, start, lr=0.01, steps=1000):
    x = start
    for _ in range(steps):
        x -= lr * df(x)
    return x