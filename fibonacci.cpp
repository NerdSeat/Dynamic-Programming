/****************************************************************************
Write  a function fib(n) that takes in an integer 'n' as an argument
and returns the nth number of the fibonacci sequence. The first and second
numbers are both on.

n:      1, 2, 3, 4, 5, 6, 7, 8...
fib(n): 1, 1, 2, 3, 5, 8, 13,21...

***************************************************************************/

#include<iostream>


long fibo(int n)
{
    if(n<=2)
        return 1;
    return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n = 9;
    std::cout<<fibo(n)<<std::endl;
}