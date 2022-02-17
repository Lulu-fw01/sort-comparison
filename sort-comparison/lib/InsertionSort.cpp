//
// Created by luka on 16.02.2022.
//

#include "Lulu/Sorts/InsertionSort.h"
#include "Lulu/Search/BinarySearch.h"

void Lulu::Sorts::insertionSort(std::vector<int>& array) {
    int key;
    int ind;
    for (int jInd = 1; jInd < array.size(); ++jInd) {
        key = array[jInd];
        ind = jInd - 1;
        while (ind >= 0 && array[ind] > key) {
            array[ind + 1] = array[ind];
            ind--;
        }
        if (ind + 1 != jInd) {
            array[ind + 1] = key;
        }
    }
}

void Lulu::Sorts::binaryInsertionSort(std::vector<int>& array) {
    int jInd;
    int searchInd;
    for (auto iInd = 1; iInd < array.size(); ++iInd) {
        jInd = iInd - 1;
        // Use binary search to find index.
        searchInd =  Lulu::Search::rightSearch(array, array[iInd], -1, jInd + 1);

        // Move.
        if (array[jInd + 1] != array[searchInd]) {
            for (int k_ind = jInd; k_ind >= searchInd; --k_ind) {
                std::swap(array[k_ind], array[k_ind + 1]);
            }
        }
    }
}