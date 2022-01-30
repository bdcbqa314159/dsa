#include "../include/dsa_bits/week3.hpp"
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <climits>
#include <sstream>

int get_change(int m)
{
    std::vector<int> money = {10, 5, 1};

    int i = 0;

    int n = 0;

    while (i < 3)
    {

        while (m - money[i] >= 0)
        {

            m -= money[i];
            n++;
        }

        i++;
    }

    return n;
}

using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values)
{
    double value = 0.0;
    int n = weights.size();
    vector<double> units(n);
    unordered_map<double, pair<int, int>> umap;

    for (int i = 0; i < n; i++)
    {
        units[i] = (1. * values[i]) / weights[i];
        umap[units[i]] = make_pair(values[i], weights[i]);
    }

    sort(units.begin(), units.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << units[i] << " " << umap[units[i]].first << " " << umap[units[i]].second << endl;
    // }

    for (int i = n - 1; i >= 0; i--)
    {

        if (capacity == 0)
            break;
        int a = min(capacity, umap[units[i]].second);
        value += a * units[i];
        capacity -= a;
    }

    return value;
}

int compute_min_refills(int dist, int tank, vector<int> &stops)
{

    int numRefills{}, currRefill{};
    int n = stops.size();

    while (currRefill <= n)
    {
        int lastRefill = currRefill;
        vector<int> stops1{};
        stops1.push_back(0);
        for (const auto &x : stops)
        {
            stops1.push_back(x);
        }
        stops1.push_back(dist);

        while ((currRefill <= n) && (stops1[currRefill + 1] - stops1[lastRefill]) <= tank)
        {
            currRefill++;
        }

        if (currRefill == lastRefill)
        {
            return -1;
        }

        if (currRefill <= n)
        {
            numRefills++;
        }
    }

    return numRefills;
}

long long max_dot_product(vector<int> a, vector<int> b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long result = 0;
    for (size_t i = 0; i < a.size(); i++)
    {
        result += ((long long)a[i]) * b[i];
    }
    return result;
}

bool cmp(Segment &s1, Segment &s2)
{
    return s1.end < s2.end;
}

vector<int> optimal_points(vector<Segment> &segments)
{
    vector<int> points;

    // for (int i = 0; i < segments.size(); i++)
    // {
    //   u.push_back(segments[i].end);

    //   umap[segments[i].end] = segments[i].start;
    // }

    sort(segments.begin(), segments.end(), cmp);

    int r = -1;
    int N = segments.size();

    for (int i = 0; i < N; i++)
    {
        if (r < segments[i].start)
        {
            r = segments[i].end;
            points.push_back(r);
        }
    }

    return points;
}

vector<int> optimal_summands(int n)
{
    vector<int> summands;
    int k = 1;

    while (n >= 2 * k + 1)
    {
        summands.push_back(k);
        n -= k;
        k++;
    }

    summands.push_back(n);

    return summands;
}

int myCompare(std::string X, std::string Y)
{

    std::string XY = X.append(Y);

    std::string YX = Y.append(X);

    return XY.compare(YX) > 0 ? 1 : 0;
}

string largest_number(vector<string> arr)
{

    std::sort(arr.begin(), arr.end(), myCompare);
    std::stringstream ret;
    for (int i = 0; i < arr.size(); i++)
        ret << arr[i];
    std::string result;
    ret >> result;
    return result;
}
