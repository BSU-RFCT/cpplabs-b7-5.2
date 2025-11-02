#pragma once
#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

template <typename Func>
double measureTime(Func f)
{
    auto start = high_resolution_clock::now();
    f();
    auto end = high_resolution_clock::now();
    duration<double, milli> diff = end - start;
    return diff.count();
}
