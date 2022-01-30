#include <dsa>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void testingGetChange()
{
    int m;
    std::cin >> m;
    std::cout << get_change(m) << '\n';
}

void testingKnapSack()
{
    int n;
    int capacity;
    std::cin >> n >> capacity;
    vector<int> values(n);
    vector<int> weights(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> values[i] >> weights[i];
    }

    double optimal_value = get_optimal_value(capacity, weights, values);

    std::cout.precision(10);
    std::cout << optimal_value << std::endl;
}

void testingCarFueling()
{
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";
}

void testingMaxDot()
{
    size_t n;
    std::cin >> n;
    vector<int> a(n), b(n);
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }
    std::cout << max_dot_product(a, b) << std::endl;
}

void testIntervals()
{
    int n;
    std::cin >> n;
    vector<Segment> segments(n);
    for (size_t i = 0; i < segments.size(); ++i)
    {
        std::cin >> segments[i].start >> segments[i].end;
    }
    vector<int> points = optimal_points(segments);
    std::cout << points.size() << "\n";
    for (size_t i = 0; i < points.size(); ++i)
    {
        std::cout << points[i] << " ";
    }
}

void testingSummands()
{
    int n;
    std::cin >> n;
    vector<int> summands = optimal_summands(n);
    std::cout << summands.size() << '\n';
    for (size_t i = 0; i < summands.size(); ++i)
    {
        std::cout << summands[i] << ' ';
    }
}

void testingPrintLargest()
{
    int n;
    std::cin >> n;
    vector<string> a(n);
    for (size_t i = 0; i < a.size(); i++)
    {
        std::cin >> a[i];
    }
    std::cout << largest_number(a);
}

int main()
{

    cout << "Hey" << endl;
    // testingGetChange();
    // testingKnapSack();
    // testingCarFueling();
    // testingMaxDot();
    // testIntervals();
    // testingSummands();
    testingPrintLargest();

    return 0;
}