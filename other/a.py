"""
Let $f(n)$ be a function defined for all positive integers $n$, where:

$$
f(n) =
\\begin{cases}
n - 3 & \\text{if } n \geq 1000 \\text{ and } n \\text{ is divisible by } 3, \\
f(f(n + 5)) & \\text{otherwise}.
\end{cases}
$$

Find the value of $f(1)$.
"""

def calc(n: int):
    if (n >= 1000 and n % 3 == 0):
        return n - 3
    else:
        return calc(calc(n + 5))
    
print(calc(1))