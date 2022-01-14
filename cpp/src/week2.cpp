#include "../include/dsa_bits/week2.hpp"
#include <iostream>
#include <vector>
#include <cmath>

int fibonacci_fast(int n)
{
    if (n <= 1)
        return n;

    int previous = 0;
    int current = 1;

    for (int i = 2; i <= n; i++)
    {
        int temp = previous;
        previous = current;
        current = temp + current;
    }

    return current;
}

int get_fibonacci_last_digit_fast(int n)
{
    if (n <= 1)
        return n;

    int previous = 0;
    int current = 1;

    for (int i = 0; i < n - 1; ++i)
    {
        int tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current) % 10;
    }

    return current;
}

long long lcm_fast(int a, int b)
{

    int p = std::max(a, b);
    int q = std::min(a, b);

    for (long l = q; l <= (long long)p * q;)
    {
        if (l % p == 0)
            return l;
        l += q;
    }

    return (long long)a * b;
}

long long get_fibonacci_huge_fast(long long n, long long m)
{
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current = 1;
    std::vector<int> v{};
    v.push_back(0);
    v.push_back(1);

    while (true)
    {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current) % m;

        if (v[v.size() - 1] == 0 && current == 1)
            break;
        else
            v.push_back(current);
    }
    v.pop_back();
    return (long long)v[n % (v.size())];
}

std::vector<int> cycle10()
{

    int previous = 0;
    int current = 1;
    std::vector<int> v{};
    v.push_back(0);
    v.push_back(1);

    while (true)
    {
        int tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current) % 10;

        if (v[v.size() - 1] == 0 && current == 1)
            break;
        else
            v.push_back(current);
    }
    v.pop_back();

    return v;
}

long long fibonacci_sum_fast(long long n)
{
    std::vector<int> v = cycle10();

    int period = v.size();

    n %= period;

    if (n <= 1)
        return n;

    int prev = 0;
    int cur = 1;

    for (int i = 2; i <= n + 2; i++)
    {
        int temp = (cur + prev) % period;
        prev = cur;
        cur = temp;
    }

    return (cur - 1) % 10;
}

long long fibonacci_sum_fast1(long long n)
{
    std::vector<int> v = cycle10();

    int period = v.size();

    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    n %= period;

    if (n == 0)
        return 0;

    int prev = 0;
    int cur = 1;

    for (int i = 2; i <= n + 2; i++)
    {
        int temp = (cur + prev) % period;
        prev = cur;
        cur = temp;
    }

    return (cur - 1);
}

long long get_fibonacci_partial_sum_fast(long long from, long long to)
{
    if (from == to)
        return get_fibonacci_huge_fast(from, 10);

    long long answer = fibonacci_sum_fast1(to) - fibonacci_sum_fast1(from - 1);

    if (answer < 0)
        return (10 + answer % 10) % 10;
    else
        return answer % 10;
}

long long fibonacci_sum_squares_fast(long long n)
{
    long long a = get_fibonacci_huge_fast(n, 10);
    long long b = get_fibonacci_huge_fast(n + 1, 10);

    return (a * b) % 10;
}