//
// Created by luka on 16.02.2022.
//

#include "Lulu/Search/BinarySearch.h"

/**
 * @brief Right binary search.
 *
 * @param numbers int vector where we search.
 * @param elem int elem which we search.
 * @param left left border.
 * @param right right border.
 * */
int Lulu::Search::rightSearch(const std::vector<int> &numbers, int elem, int left, int right) {
    int mid;

    while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (numbers[mid] <= elem) {
            left = mid;
        } else {
            right = mid;
        }
    }

    return right;
}