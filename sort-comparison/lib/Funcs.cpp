//
// Created by luka on 16.02.2022.
//

#include <cmath>

#include "Lulu/Utils/Funcs.h"


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

int Lulu::Utils::getDigit(int num, int digitNum) {
    return static_cast<int>(num / pow(256, digitNum)) % 256;
}

bool Lulu::Utils::isSorted(const std::vector<int> &arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}