#pragma once
#include "stats.h"

template <typename T>
void bubbleSort(T arr[], int n, Stats& st);

template <typename T>
void quickSort(T arr[], int low, int high, Stats& st);

#include "sorts.cpp"
