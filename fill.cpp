#include <cstdlib>

template <typename T>
void fillAscending(T arr[], int n) {
    for (int i = 0; i < n; ++i) arr[i] = i;
}

template <typename T>
void fillDescending(T arr[], int n) {
    for (int i = 0; i < n; ++i) arr[i] = n - i;
}

template <typename T>
void fillRandom(T arr[], int n) {
    for (int i = 0; i < n; ++i) arr[i] = rand() % 100;
}
