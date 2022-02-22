//
// Created by luka on 16.02.2022.
//

#include "Lulu/Search/BinarySearch.h"

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