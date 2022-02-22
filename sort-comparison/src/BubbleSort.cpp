//
// Created by luka on 16.02.2022.
//

#include "Lulu/Sorts/BubbleSort.h"

/**
* @brief Bubble sort with 1st and 2nd Iverson's
* conditions.
*
* @param array -link to int vector.
* */
void Lulu::Sorts::bubbleSortByIversonFull(std::vector<int> &array) {
    // Flag for Iverson's
    // first condition.
    bool notSorted = true;
    // Right border for Iverson's
    // second condition.
    int right = array.size() - 1;
    int lastSwap = 0;
    while (notSorted) {
        notSorted = false;
        for (int j = 0; j < right; ++j) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                notSorted = true;
                lastSwap = j;
            }
        }
        right = lastSwap;
    }
}

/**
* @brief Bubble sort with 1st Iverson's
* condition.
*
* @param array -link to int vector.
* */
void Lulu::Sorts::bubbleSortByIversonFirst(std::vector<int> &array) {
    // First Iverson's condition.
    bool notSorted = true;
    int i = 0;
    while (notSorted) {
        notSorted = false;
        for (int j = 0; j < array.size() - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                notSorted = true;
            }
        }
    }
}

/**
* @brief Classic bubble sort.
*
* @param array -link to int vector.
* */
void Lulu::Sorts::bubbleSortClassic(std::vector<int> &array) {
    for (int i = 0; i < array.size() - 1; ++i) {
        for (int j = 0; j < array.size() - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
            }
        }
    }
}