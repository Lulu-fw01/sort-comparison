//
// Created by luka on 16.02.2022.
//

#ifndef SORT_COMPARISON_GETDIGIT_H
#define SORT_COMPARISON_GETDIGIT_H

#include <vector>

namespace Lulu::Utils {

    int getMax(const std::vector<int> &arr);

    int getDigitBy256(int num, int digitNum);

    bool isSorted(const std::vector<int> &arr);

    void printVector(const std::vector<int> &vec);

    int getRandomNum(int min, int max);

    std::vector<int> getRandomVector(int length);

    std::vector<int> getRandomVector(int length, int min, int max);
}

#endif //SORT_COMPARISON_GETDIGIT_H
