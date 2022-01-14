#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProductFast(const std::vector<int> &numbers)
{
    int n = numbers.size();
    int max_index1 = -1;
    for (int i = 0; i < n; i++)
    {
        if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
        {
            max_index1 = i;
        }
    }

    int max_index2 = -1;
    for (int i = 0; i < n; i++)
    {
        if ((i != max_index1) && ((max_index2 == -1) || (numbers[i] > numbers[max_index2])))
        {
            max_index2 = i;
        }
    }

    long long a = numbers[max_index1];
    long long b = numbers[max_index2];

    return a * b;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProductFast(numbers);
    std::cout << "\n";
    return 0;
}
