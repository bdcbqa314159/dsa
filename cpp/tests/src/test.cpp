#include <dsa>
#include <iostream>
#include <string>

void messageTester()
{
    message();
}

void sum2DigitsTester()
{

    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    std::cout << sum_of_two_digits(a, b);
}

void maxPairwiseProductTester()
{
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProductFast(numbers);
    std::cout << std::endl;
}

void fibonacciNumberTester()
{

    int n = 0;
    std::cin >> n;

    // std::cout << fibonacci_naive(n) << '\n';
    // // test_solution();
    std::cout << fibonacci_fast(n) << '\n';
}

void lcmTester()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << lcm_fast(a, b) << std::endl;
}

void getFibHugeTester()
{
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
}

void hugeSumFibTester()
{
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_fast(n);
}

void partialSumFibTester()
{
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_fast(from, to) << '\n';
}

void sumFibSqTester()
{
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_squares_fast(n);
}

int main()
{
    // messageTester();
    // sum2DigitsTester();
    // maxPairwiseProductTester();
    // fibonacciNumberTester();
    // lcmTester();
    // getFibHugeTester();
    // hugeSumFibTester();
    partialSumFibTester();
    // sumFibSqTester();

    return 0;
}
