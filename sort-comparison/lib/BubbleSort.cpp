//
// Created by luka on 16.02.2022.
//

#include "LuluSorts/BubbleSort.h"

void LuluSorts::bubbleSortByIversonFull(std::vector<int> *array) {
    // Flag for Iverson's
    // first condition.
    bool not_sorted = true;
    // Right border for Iverson's
    // second condition.
    int right = array->size() - 1;
    int last_swap = 0;
    while (not_sorted) {
        not_sorted = false;
        for (int j = 0; j < right; ++j) {
            if ((*array)[j] > (*array)[j + 1]) {
                std::swap((*array)[j], (*array)[j + 1]);
                not_sorted = true;
                last_swap = j;
            }
        }
        right = last_swap;
    }
}

void LuluSorts::bubbleSortByIversonHalf(std::vector<int> *array) {

}

void LuluSorts::bubbleSortClassic(std::vector<int> *array) {

}