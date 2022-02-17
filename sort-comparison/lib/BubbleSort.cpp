//
// Created by luka on 16.02.2022.
//

#include "Lulu/Sorts/BubbleSort.h"

void Lulu::Sorts::bubbleSortByIversonFull(std::vector<int>& array) {
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

void Lulu::Sorts::bubbleSortByIversonHalf(std::vector<int>& array) {

}

void Lulu::Sorts::bubbleSortClassic(std::vector<int>& array) {

}