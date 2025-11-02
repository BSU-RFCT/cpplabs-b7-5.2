#include <iostream>
#include <ctime>
#include "sorts.h"
#include "fill.h"
#include "io.h"
#include "profiler.h"

using namespace std;

int main()
{
    initializeConsole();
    ios::sync_with_stdio(false);
    srand(time(nullptr));

    int N;
    Stats stBubble, stQuick;

    setArraySize(N);
    int arr1[N], arr2[N];
    const short mode = setMode();

    mode == 1 ? fillAscending(arr1, N) : mode == 2 ? fillDescending(arr1, N) : fillRandom(arr1, N);
    for (int i = 0; i < N; ++i) arr2[i] = arr1[i];

    const double timeBubble = measureTime([&]()
    {
        bubbleSort(arr1, N, stBubble);
    });

    const double timeQuick = measureTime([&]()
    {
        quickSort(arr2, 0, N - 1, stQuick);
    });

    printHeader();
    printRow("Сортировка обменом", stBubble, timeBubble);
    printRow("Быстрая сортировка", stQuick, timeQuick);
}
