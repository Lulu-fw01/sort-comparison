//
// Created by luka on 16.02.2022.
//

#include "LuluSorts/RadixSort.h"
#include "LuluUtils/Funcs.h"

void LuluSorts::radixSort(std::vector<int> *array) {
    int it_num = 0;
    int maxi = LuluUtils::getMax(*array);
    while (maxi != 0) {
        it_num++;
        maxi = maxi / 256;
    }
    std::vector<int> result(array->size());
    std::vector<int> counter(256);
    std::vector<int> offset(256);
    int dig;
    for (int ind = 0; ind < it_num; ++ind) {
        for (int j = 0; j < 256; ++j) {
            counter[j] = 0;
        }
        for (int j_elem : *array) {
            dig = LuluUtils::getDigit(j_elem, ind);
            counter[dig]++;
        }
        offset[0] = 0;
        for (int j = 1; j < 256; ++j) {
            offset[j] = counter[j - 1] + offset[j - 1];
        }

        for (int j_elem : *array) {
            dig = LuluUtils::getDigit(j_elem, ind);
            result[offset[dig]] = j_elem;
            offset[dig]++;
        }
        *array = result;
    }
}