//
// Created by luka on 16.02.2022.
//

#include "LuluSorts/InsertionSort.h"
#include "LuluSearch/BinarySearch.h"

void LuluSorts::insertionSort(std::vector<int> *array) {
    int key;
    int ind;
    for (int j_ind = 1; j_ind < array->size(); ++j_ind) {
        key = (*array)[j_ind];
        ind = j_ind - 1;
        while (ind >= 0 && (*array)[ind] > key) {
            (*array)[ind + 1] = (*array)[ind];
            ind--;
        }
        if (ind + 1 != j_ind) {
            (*array)[ind + 1] = key;
        }
    }
}

void LuluSorts::binaryInsertionSort(std::vector<int> *array) {
    int j_ind;
    int search_ind;
    for (auto i_ind = 1; i_ind < array->size(); ++i_ind) {
        j_ind = i_ind - 1;
        // Use binary search to find index.
        search_ind =  LuluSearch::rightSearch(*array, (*array)[i_ind], -1, j_ind + 1);

        // Move.
        if ((*array)[j_ind + 1] != (*array)[search_ind]) {
            for (int k_ind = j_ind; k_ind >= search_ind; --k_ind) {
                std::swap((*array)[k_ind], (*array)[k_ind + 1]);
            }
        }
    }
}