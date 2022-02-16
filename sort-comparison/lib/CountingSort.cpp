//
// Created by luka on 16.02.2022.
//

#include "LuluSorts/CountingSort.h"
#include "LuluUtils/Funcs.h"

void LuluSorts::countingSort(std::vector<int> *array) {
    int max = LuluUtils::getMax(*array);

    std::vector<int> un_elements(max + 1);

    // Count how many elements o such element.
    for (int elem : *array) {
        un_elements[elem]++;
    }

    // Count how many element before each element.
    for (int j = 1; j < un_elements.size(); ++j) {
        un_elements[j] += un_elements[j - 1];
    }

    std::vector<int> result(array->size());

    // Fill result vector.
    for (int i = array->size() - 1; i >= 0; --i) {
        // We know how many elements before each element.
        // That is mean that we know new position of each element.
        un_elements[(*array)[i]]--;
        result[un_elements[(*array)[i]]] = (*array)[i];
    }

    *array = result;
}
