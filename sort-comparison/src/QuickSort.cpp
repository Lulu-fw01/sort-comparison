//
// Created by luka on 20.02.2022.
//

#include "Lulu/Sorts/QuickSort.h"

/**
 * @brief pivot by middle element.
 * */
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
 * @brief Quick sort function <p>
 * that uses the Hoare partition by the middle element.
 *
 * @param array link to int vector.
 * */
void Lulu::Sorts::quickSortByHoare(std::vector<int> &array) {
    // Call for quick sort.
    Lulu::Sorts::quickSortByHoare(array, 0, array.size() - 1);
}

/**
 * @brief Quick sort function on a segment <p>
 * that uses the Hoare partition by the middle element.
 *
 * @param array link to int vector.
 * @param first index of first element of a segment.
 * @param last index of last element of a segment.
 * */
void Lulu::Sorts::quickSortByHoare(std::vector<int> &array, int first, int last) {
    if (first < last) {
        auto pivot = pivotListByHoare(array, first, last);
        Lulu::Sorts::quickSortByHoare(array, first, pivot.second);
        Lulu::Sorts::quickSortByHoare(array, pivot.first, last);
    }
}


/**
 * @brief pivot by last element.
 * */
int pivotListByLomuto(std::vector<int> &array, int first, int last) {
    // Set pivot as last element.
    int pivot = array[last];
    int pivotPoint = last;
    int j = first - 1;

    for (int i = first; i < last; ++i) {
        if (array[i] <= pivot) {
            // Put elements which are smaller or equal to
            // last element into beginning of the vector.
            j++;
            std::swap(array[j], array[i]);
        }
    }
    // Put pivot element before all
    // elements which are bigger or equal to it.
    std::swap(array[j + 1], array[pivotPoint]);
    return j + 1;
}

/**
 * @brief Quick sort function <p>
 * that uses the Lomuto partition by the last element.
 *
 * @param array link to int vector.
 * */
void Lulu::Sorts::quickSortByLomuto(std::vector<int> &array) {
    // Call for quick sort.
    quickSortByLomuto(array, 0, array.size() - 1);
}

/**
 * @brief Quick sort function on a segment <p>
 * that uses the Lomuto partition by the last element.
 *
 * @param array -link to int vector.
 * @param first -index of first element of a segment.
 * @param last -index of last element of a segment.
 * */
void Lulu::Sorts::quickSortByLomuto(std::vector<int> &array, int first, int last) {
    if (first < last) {
        auto pivot = pivotListByLomuto(array, first, last);
        Lulu::Sorts::quickSortByLomuto(array, first, pivot - 1);
        Lulu::Sorts::quickSortByLomuto(array, pivot + 1, last);
    }
}

