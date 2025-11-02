#include <utility>
#include "stats.h"

template <typename T>
void bubbleSort(T arr[], const int n, Stats &st) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j) {
            st.comparisons++;
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                st.swaps++;
            }
        }
}

template <typename T>
int partition(T arr[], const int left, int right, Stats &st) {
    T pivot = arr[right]; // опорный элемент
    int itemFromLeft = left - 1; // граница элементов, меньших pivot

    for (int itemFromRight = left; itemFromRight < right; ++itemFromRight) {
        st.comparisons++;
        if (arr[itemFromRight] < pivot) {
            itemFromLeft++;
            std::swap(arr[itemFromLeft], arr[itemFromRight]);
            st.swaps++;
        }
    }

    // ставим pivot на своё место — между меньшими и большими элементами
    std::swap(arr[itemFromLeft + 1], arr[right]);
    st.swaps++;

    return itemFromLeft + 1; // возвращаем индекс pivot
}

template <typename T>
void quickSort(T arr[], int left, int right, Stats &st) {
    if (left < right) {
        int pivotIndex = partition(arr, left, right, st);
        quickSort(arr, left, pivotIndex - 1, st);
        quickSort(arr, pivotIndex + 1, right, st);
    }
}