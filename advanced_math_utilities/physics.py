import math

def projectile_range(v, theta, g=9.8):
    theta = math.radians(theta)
    return (v**2 * math.sin(2 * theta)) / g


def gravitational_force(m1, m2, r, G=6.674e-11):
    return G * m1 * m2 / r**2