//
// Created by luka on 16.02.2022.
//

#include "Lulu/Sorts/CountingSort.h"
#include "Lulu/Utils/Funcs.h"

/**
 * @brief Counting sort function.<p>
 * Stable.
 *
 * @param array link to int vector.
 * */
void Lulu::Sorts::countingSort(std::vector<int>& array) {
    int max = Lulu::Utils::getMax(array);

    std::vector<int> unElements(max + 1);

    // Count how many elements o such element.
    for (int elem : array) {
        unElements[elem]++;
    }

    // Count how many element before each element.
    for (int j = 1; j < unElements.size(); ++j) {
        unElements[j] += unElements[j - 1];
    }

    std::vector<int> result(array.size());

    // Fill result vector.
    for (int i = array.size() - 1; i >= 0; --i) {
        // We know how many elements before each element.
        // That is mean that we know new position of each element.
        unElements[array[i]]--;
        result[unElements[array[i]]] = array[i];
    }

    array = result;
}
