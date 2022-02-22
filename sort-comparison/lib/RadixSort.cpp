//
// Created by luka on 16.02.2022.
//

#include "Lulu/Sorts/RadixSort.h"
#include "Lulu/Utils/Funcs.h"

/**
 * @brief Radix sort function. <p>
 * Last significant radix sort by base 256.
 *
 * @param array -link to int vector.
 * @attention numbers in vector greater than or equal to zero<p>
 * in this function realization.
 * */
void Lulu::Sorts::radixSort(std::vector<int>& array) {
    int itNum = 0;
    int maxi = Lulu::Utils::getMax(array);
    while (maxi != 0) {
        itNum++;
        maxi = maxi / 256;
    }
    std::vector<int> result(array.size());
    std::vector<int> counter(256);
    std::vector<int> offset(256);
    int dig;
    for (int ind = 0; ind < itNum; ++ind) {
        for (int j = 0; j < 256; ++j) {
            counter[j] = 0;
        }
        for (int elem : array) {
            dig = Lulu::Utils::getDigit(elem, ind);
            counter[dig]++;
        }
        offset[0] = 0;
        for (int j = 1; j < 256; ++j) {
            offset[j] = counter[j - 1] + offset[j - 1];
        }

        for (int elem : array) {
            dig = Lulu::Utils::getDigit(elem, ind);
            result[offset[dig]] = elem;
            offset[dig]++;
        }
        array = result;
    }
}