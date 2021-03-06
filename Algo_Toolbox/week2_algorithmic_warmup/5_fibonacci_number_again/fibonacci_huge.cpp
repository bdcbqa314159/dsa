#include <iostream>
#include <vector>

long long get_fibonacci_huge_naive(long long n, long long m)
{
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current = 1;

    for (long long i = 0; i < n - 1; ++i)
    {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
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

int main()
{
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
}
