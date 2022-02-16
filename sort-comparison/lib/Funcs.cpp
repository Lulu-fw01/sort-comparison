//
// Created by luka on 16.02.2022.
//

#include <cmath>

#include "LuluUtils/Funcs.h"


int LuluUtils::getMax(const std::vector<int> &arr) {
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

int LuluUtils::getDigit(int num, int digit_num) {
    return static_cast<int>(num / pow(256, digit_num)) % 256;
}

bool LuluUtils::isVectorSorted(const std::vector<int> &arr) {

    return true;
}