# Executable Mathematics: From Numerical Exercises to Modular Computational Tools

**T. R. Bentley**  
Repository-grounded technical report | September 2026  
Repository: Tybent18/math-for-computing

> [Download the publication PDF](executable-mathematics.pdf) · [Repository README](../README.md)

## Abstract

This report traces a mathematical-programming collection from standalone numerical exercises to a modular Python toolkit spanning calculus, linear algebra, number theory, combinatorics, sequences, chaos, physics, and finance. It emphasizes the translation of definitions into executable procedures, the importance of validation and numerical assumptions, and the distinction between implemented functions and experimentally verified accuracy.

## Scope

Computational mathematics, numerical exercises, and modular domain utilities.

Claims are limited to named repository artifacts. Proposed tests, benchmarks, integrations, and research directions are future work—not reported results.

## Repository evidence map

| Cluster | Artifacts | Interpretation |
| --- | --- | --- |
| Modular toolkit | `advanced_math_utilities/` | Domain modules for calculus, linear algebra, number theory, combinatorics, sequences, chaos, physics, and finance. |
| Combinatorics | `combination.c, permutation.c` | Discrete counting procedures. |
| Sequences and approximation | `collatz_sequence.c, fibonnaci.py, exponential.c, partial_sum.c` | Iterative sequences and numerical approximation. |
| Statistics and algebra | `standard_deviation.c, quad_root.c` | Focused statistical and equation-solving exercises. |
| Representation | `binary_convert.java, array_pairwise_swap.c` | Numeric representation and array transformation. |

## Technical questions

- How faithfully does code encode the mathematical definition?
- Where do precision, stability, and domain constraints matter?
- How does modularization change reuse and validation?

## Reproducible inspection protocol

A reviewer should clone the repository, record the commit SHA and toolchain versions, inspect each mapped artifact, execute only examples with declared entry points, preserve outputs and errors, and compare observations with stated expectations. A deliberate debugging failure is evidence only when its expected failure class is declared in advance.

## Evidence maturity

| Level | Meaning |
| --- | --- |
| E0 | Artifact listed |
| E1 | Intended behavior described |
| E2 | Environment, command, and output recorded |
| E3 | Repeatable behavioral tests included |
| E4 | Frozen data supports a bounded comparison |

## Limitations

- No unified accuracy benchmark is currently recorded.
- Standalone programs vary in interface and validation behavior.
- Scientific reliability requires reference values, tolerances, and environment capture.

## Development roadmap

- Add reference-value and property-based tests.
- Document numeric domains and error tolerances.
- Benchmark accuracy separately from execution speed.

## Portfolio role

This repository belongs to the cumulative sequence **Foundations & Algorithms → Data Structures Practice → OOP Concepts → Math for Computing → Practical Utilities**. Advanced repositories carry the stronger systems and empirical-research claims.

## Conclusion

The repository is most credible when each claim points to inspectable code and future measurements can be added without rewriting history. Sophistication comes from traceability, not inflated labels.
