//
// Created by luka on 16.02.2022.
//

#ifndef SORT_COMPARISON_GETDIGIT_H
#define SORT_COMPARISON_GETDIGIT_H

#include <vector>

namespace Lulu::Utils {

    int getMax(const std::vector<int>&);

    int getDigitBy256(int, int);

    bool isSorted(const std::vector<int>&);

    void printVector(const std::vector<int>&);
}

#endif //SORT_COMPARISON_GETDIGIT_H
