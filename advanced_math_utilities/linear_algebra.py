import numpy as np

def matrix_info(A):
    return {
        "determinant": np.linalg.det(A),
        "inverse": np.linalg.inv(A),
        "eigenvalues": np.linalg.eigvals(A)
    }