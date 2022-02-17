//
// Created by luka on 16.02.2022.
//

#include "Lulu/Sorts/SelectionSort.h"

void Lulu::Sorts::selectionSort(std::vector<int>& array) {
    int min;

    for (int ind = 0; ind + 1 < array.size(); ++ind) {
        min = ind;
        // Search for minimal element.
        for (int j = ind + 1; j < array.size(); ++j) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        // Swap.
        if (ind != min) {
            std::swap(array[ind], array[min]);
        }
    }
}