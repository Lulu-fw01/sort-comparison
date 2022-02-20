//
// Created by luka on 20.02.2022.
//

#ifndef SORT_COMPARISON_QUICKSORT_H
#define SORT_COMPARISON_QUICKSORT_H

#include <vector>

namespace Lulu::Sorts {
    void quickSortByHoare(std::vector<int>&);

    void quickSortByHoare(std::vector<int>&, int, int);

    void quickSortByLomuto(std::vector<int>&);

    void quickSortByLomuto(std::vector<int>&, int, int);
}

#endif //SORT_COMPARISON_QUICKSORT_H
