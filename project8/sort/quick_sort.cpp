#include "sort.h"

int _partition(std::vector<int>& arr, int start, int end) {

    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    std::swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {

        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            std::swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void _quickSort(std::vector<int>& arr, int start, int end) {

    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = _partition(arr, start, end);

    // Sorting the left part
    _quickSort(arr, start, p - 1);

    // Sorting the right part
    _quickSort(arr, p + 1, end);
}

void quickSort(std::vector<int>& arr) {
    _quickSort(arr, 0, arr.size());
    return;
}