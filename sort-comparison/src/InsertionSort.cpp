//
// Created by luka on 16.02.2022.
//

#include "Lulu/Sorts/InsertionSort.h"
#include "Lulu/Search/BinarySearch.h"


/**
 * @brief Insertion sort function.<p>
 * Simple inserts.
 *
 * @param array link to int vector.
 * */
void Lulu::Sorts::insertionSort(std::vector<int>& array) {
    int key;
    int ind;
    for (int j = 1; j < array.size(); ++j) {
        key = array[j];
        ind = j - 1;
        while (ind >= 0 && array[ind] > key) {
            array[ind + 1] = array[ind];
            ind--;
        }
        if (ind + 1 != j) {
            array[ind + 1] = key;
        }
    }
}


/**
 * @brief Insertion sort function.<p>
 * Binary inserts.
 *
 * @param array link to int vector.
 * */
void Lulu::Sorts::binaryInsertionSort(std::vector<int>& array) {
    int j;
    int searchInd;
    for (auto i = 1; i < array.size(); ++i) {
        j = i - 1;
        // Use binary search to find index.
        searchInd = Lulu::Search::rightSearch(array, array[i], -1, j + 1);

        // Move.
        if (array[j + 1] != array[searchInd]) {
            for (int k = j; k >= searchInd; --k) {
                std::swap(array[k], array[k + 1]);
            }
        }
    }
}