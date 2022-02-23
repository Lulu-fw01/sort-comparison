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
    for (auto elem: vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

/**
 * @brief Random number between 2 numbers.
 *
 * @attention this function use rand().
 * So, use srand() before.
 *
 * @param min -min value.
 * @param max -max value.
 * */
int Lulu::Utils::getRandomNum(int min, int max) {
    return min + rand() % (max - min + 1);
}

/**
 * Get random int vector.
 * */
std::vector<int> Lulu::Utils::getRandomVector(int length) {
    std::vector<int> vec(length);
    for (int i = 0; i < length; ++i) {
        vec[i] = rand();
    }
    return vec;
}

/**
 * @brief Get random int vector.
 *
 * @attention this function use rand().
 * So, use srand() before.
 *
 * @param length -length of vector.
 * @param min -min value of vector.
 * @param max -max value of vector.
 * */
std::vector<int> Lulu::Utils::getRandomVector(int length, int min, int max) {
    std::vector<int> vec(length);
    for (int i = 0; i < length; ++i) {
        vec[i] = getRandomNum(min, max);
    }
    return vec;
}