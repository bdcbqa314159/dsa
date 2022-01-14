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

int main()
{

    // messageTester();

    // sum2DigitsTester();
    maxPairwiseProductTester();
    return 0;
}
