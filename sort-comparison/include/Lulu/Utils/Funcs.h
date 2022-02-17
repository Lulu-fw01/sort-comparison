//
// Created by luka on 16.02.2022.
//

#ifndef SORT_COMPARISON_GETDIGIT_H
#define SORT_COMPARISON_GETDIGIT_H

#include <vector>

namespace Lulu::Utils {

    /**
     * @brief Function which returns max element of int vector.
     *
     * @param arr const link to int vector.
     *
     * @return max element of int vector or
     * if vector is empty returns 0.
     * */
    int getMax(const std::vector<int>& arr);

    /***/
    int getDigit(int num, int digitNum);

    /***/
    bool isSorted(const std::vector<int>& arr);

}

#endif //SORT_COMPARISON_GETDIGIT_H
