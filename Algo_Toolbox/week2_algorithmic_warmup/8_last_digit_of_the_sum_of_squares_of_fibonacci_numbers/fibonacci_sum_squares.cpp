#include <iostream>
#include <vector>
#include <cmath>

int fibonacci_sum_squares_naive(long long n)
{
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current = 1;
    long long sum = 1;

    for (long long i = 0; i < n - 1; ++i)
    {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
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

long long fibonacci_sum_squares_fast(long long n)
{
    long long a = get_fibonacci_huge_fast(n, 10);
    long long b = get_fibonacci_huge_fast(n + 1, 10);

    return (a * b) % 10;
}

int main()
{
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_squares_fast(n);
}
