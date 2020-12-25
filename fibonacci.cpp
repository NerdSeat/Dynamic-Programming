/****************************************************************************
Write  a function fib(n) that takes in an integer 'n' as an argument
and returns the nth number of the fibonacci sequence. The first and second
numbers are both on.

n:      1, 2, 3, 4, 5, 6, 7, 8...
fib(n): 1, 1, 2, 3, 5, 8, 13,21...
***************************************************************************/

#include<iostream>
#include<unordered_map>
typedef unsigned long long ull;

ull fibo(int n,std::unordered_map<int,ull>& memo)
{
    auto val = memo.find(n);
    if(n<=2)
        return 1;
    if(val!=memo.end())
        return memo[n];
    memo[n] = fibo(n-1,memo) + fibo(n-2,memo);
    return memo[n];
}

int main()
{
    std::unordered_map<int, ull> memo;
    int n = 50;
    std::cout<<fibo(n,memo)<<std::endl;
}
