#ifndef WEEK3_H
#define WEEK3_H
#include <vector>
#include <string>

int get_change(int m);
double get_optimal_value(int capacity, std::vector<int> weights, std::vector<int> values);
int compute_min_refills(int dist, int tank, std::vector<int> &stops);
long long max_dot_product(std::vector<int> a, std::vector<int> b);

struct Segment
{
    int start, end;
};

std::vector<int> optimal_points(std::vector<Segment> &segments);
bool cmp(Segment &s1, Segment &s2);
std::vector<int> optimal_summands(int n);
int myCompare(std::string X, std::string Y);
std::string largest_number(std::vector<std::string> a);

#endif