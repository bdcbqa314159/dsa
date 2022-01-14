#include <iostream>
#include <vector>

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

// int fibonacci_sum_naive(long long n)
// {
//     if (n <= 1)
//         return n;

//     long long previous = 0;
//     long long current = 1;
//     long long sum = 1;

//     for (long long i = 0; i < n - 1; ++i)
//     {
//         long long tmp_previous = previous;
//         previous = current;
//         current = tmp_previous + current;
//         sum += current;
//     }

//     return sum % 10;
// }

long long fibonacci_sum_fast(long long n)
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

    return (cur - 1) % 10;
}

int main()
{
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_fast(n) << '\n';
}
