//
// Created by luka on 20.02.2022.
//

#ifndef SORT_COMPARISON_QUICKSORT_H
#define SORT_COMPARISON_QUICKSORT_H

#include <vector>

namespace Lulu::Sorts {
    void quickSortByHoare(std::vector<int> &array);

    void quickSortByHoare(std::vector<int> &array, int first, int last);

    void quickSortByLomuto(std::vector<int> &array);

    void quickSortByLomuto(std::vector<int> &array, int first, int last);
}

#endif //SORT_COMPARISON_QUICKSORT_H
