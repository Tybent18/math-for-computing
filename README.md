# Math for Computing

A collection of mathematical programs ranging from focused numerical exercises to a modular Python toolkit covering calculus, linear algebra, number theory, physics, finance, chaos, and combinatorics.

## Project clusters

### Advanced Python toolkit

The [`advanced_math_utilities/`](advanced_math_utilities/) package groups reusable modules by domain.

| Module | Focus |
| --- | --- |
| [`calculus.py`](advanced_math_utilities/calculus.py) | Calculus utilities |
| [`linear_algebra.py`](advanced_math_utilities/linear_algebra.py) | Vector and matrix operations |
| [`number_theory.py`](advanced_math_utilities/number_theory.py) | Number-theoretic functions |
| [`combinatorics.py`](advanced_math_utilities/combinatorics.py) | Counting and combinatorial methods |
| [`sequences.py`](advanced_math_utilities/sequences.py) | Mathematical sequences |
| [`chaos.py`](advanced_math_utilities/chaos.py) | Chaotic-system experiments |
| [`physics.py`](advanced_math_utilities/physics.py) | Physics calculations |
| [`finance.py`](advanced_math_utilities/finance.py) | Financial mathematics |
| [`main.py`](advanced_math_utilities/main.py) | Toolkit entry point |

### Numerical and discrete exercises

- combinatorics: `combination.c`, `permutation.c`
- sequences: `collatz_sequence.c`, `fibonnaci.py`
- approximation and sums: `exponential.c`, `partial_sum.c`, `sum_div.c`
- statistics and algebra: `standard_deviation.c`, `quad_root.c`
- representations and arrays: `binary_convert.java`, `array_pairwise_swap.c`

## Run examples

```bash
python advanced_math_utilities/main.py
python fibonnaci.py
gcc -Wall -Wextra -pedantic standard_deviation.c -lm -o standard_deviation
./standard_deviation
```

## Purpose

This repository connects mathematical definitions to executable models. The emphasis is on decomposition, numerical reasoning, and the progression from single-purpose programs toward reusable scientific modules.

## Technical report

- [Read: Executable Mathematics](docs/executable-mathematics.md)
- [Download the publication PDF](docs/executable-mathematics.pdf)

The report maps claims to repository artifacts, defines an evidence-maturity model, documents limitations, and provides a reproducible development roadmap.

## Foundation portfolio

This repository is part of a five-repository learning path:

1. [Foundations & Algorithms](https://github.com/Tybent18/foundations-algorithms)
2. [Data Structures Practice](https://github.com/Tybent18/data-structures-practice)
3. [OOP Concepts](https://github.com/Tybent18/oop-concepts)
4. [Math for Computing](https://github.com/Tybent18/math-for-computing)
5. [Practical Utilities](https://github.com/Tybent18/practical-utilities)

## Status

Active learning collection. The modular toolkit is the primary expansion area; the standalone programs preserve the earlier implementation path.

## License

[MIT](LICENSE)
