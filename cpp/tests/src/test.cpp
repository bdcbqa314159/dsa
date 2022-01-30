#include <dsa>
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

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
    // std::cout << get_change(n);
}

int myCompare(std::string X, std::string Y)
{
    // first append Y at the end of X
    std::string XY = X.append(Y);

    // then append X at the end of Y
    std::string YX = Y.append(X);

    // Now see which of the two
    // formed numbers is greater
    return XY.compare(YX) > 0 ? 1 : 0;
}

std::string printLargest(std::vector<std::string> arr)
{

    std::sort(arr.begin(), arr.end(), myCompare);
    std::stringstream ret;
    for (int i = 0; i < arr.size(); i++)
        ret << arr[i];
    std::string result;
    ret >> result;
    return result;
}

// Driver Code
void testingLargest()
{
    std::vector<std::string> arr;
    arr.push_back("57");
    arr.push_back("52");
    arr.push_back("581");
    arr.push_back("569");
    arr.push_back("532");
    arr.push_back("517");
    arr.push_back("5");

    std::cout << printLargest(arr);
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
    // partialSumFibTester();
    // sumFibSqTester();
    testingLargest();

    return 0;
}
