//
// Created by luka on 20.02.2022.
//

#include "Lulu/Sorts/QuickSort.h"

// Pivot by middle element.
std::pair<int, int> pivotListByHoare(std::vector<int> &array, int first, int last) {
    int mid = first + (last - first) / 2;
    // Set pivot as middle element.
    int pivot = array[mid];

    while (first <= last) {
        // While elements are
        // smaller than middle element.
        while (array[first] < pivot) {
            first++;
        }

        // While elements are
        // bigger than middle element.
        while (array[last] > pivot) {
            last--;
        }
        if (first > last) {
            // It means that we shouldn't swap elements more.
            return {first, last};
        }

        // Swap elements.
        std::swap(array[first++], array[last--]);
    }

    return {first, last};
}

/**
 *
 *
 * */
void Lulu::Sorts::quickSortByHoare(std::vector<int> &array) {
    // Call for quick sort.
    Lulu::Sorts::quickSortByHoare(array, 0, array.size() - 1);
}

// Quick sort method.
void Lulu::Sorts::quickSortByHoare(std::vector<int> &array, int first, int last) {
    if (first < last) {
        auto pivot = pivotListByHoare(array, first, last);
        Lulu::Sorts::quickSortByHoare(array, first, pivot.second);
        Lulu::Sorts::quickSortByHoare(array, pivot.first, last);
    }
}


// Pivot by middle element.
std::pair<int, int> pivotListByLomuto(std::vector<int> &array, int first, int last) {
    int mid = first + (last - first) / 2;
    // Set pivot as middle element.
    int pivot = array[mid];

    while (first <= last) {
        // While elements are
        // smaller than middle element.
        while (array[first] < pivot) {
            first++;
        }

        // While elements are
        // bigger than middle element.
        while (array[last] > pivot) {
            last--;
        }
        if (first > last) {
            // It means that we shouldn't swap elements more.
            return std::pair(first, last);
        }

        // Swap elements.
        std::swap(array[first++], array[last--]);
    }

    return {first, last};
}

/**
 *
 *
 *
 * */
void Lulu::Sorts::quickSortByLomuto(std::vector<int> &array) {
    // Call for quick sort.
    quickSortByLomuto(array, 0, array.size() - 1);
}

// Quick sort method.
void Lulu::Sorts::quickSortByLomuto(std::vector<int> &array, int first, int last) {
    // Num of recursion calls.
    if (first < last) {
        auto pivot = pivotListByLomuto(array, first, last);
        Lulu::Sorts::quickSortByLomuto(array, first, pivot.second);
        Lulu::Sorts::quickSortByLomuto(array, pivot.first, last);
    }
}

