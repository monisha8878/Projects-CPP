def recursive_fib(n):
    if n==1 or n==2:
        return 1
    else:
        return recursive_fib(n-1)+recursive_fib(n-2)
print(recursive_fib(6))

