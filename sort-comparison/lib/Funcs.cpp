//
// Created by luka on 16.02.2022.
//

#include <cmath>
#include <iostream>

#include "Lulu/Utils/Funcs.h"

/**
* @brief Function which returns max element of int vector.
*
* @param arr const link to int vector.
*
* @return max element of int vector or
* if vector is empty returns 0.
*/
int Lulu::Utils::getMax(const std::vector<int> &arr) {
    if (arr.empty()) {
        return 0;
    }
    int max = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

/**
 * @brief Get n-th digit by 256.
 *
 * @param num - number.
 * @param digitNum - digit number.
 * */
int Lulu::Utils::getDigitBy256(int num, int digitNum) {
    return static_cast<int>(num / pow(256, digitNum)) % 256;
}

/**
 * @brief Check if int vector sorted.
 *
 * @param vec - const link to vector.
 * */
bool Lulu::Utils::isSorted(const std::vector<int> &arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

/**
 * @brief Print int vector.
 *
 * @param vec - const link to vector.
 * */
void Lulu::Utils::printVector(const std::vector<int> &vec) {
    for (auto elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}