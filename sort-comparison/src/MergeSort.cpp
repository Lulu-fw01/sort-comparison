//
// Created by luka on 20.02.2022.
//

#include "Lulu/Sorts/MergeSort.h"

void mergeLists(std::vector<int>&, int, int, int, int);

/**
 * @brief Merge sort function.
 *
 *
 * @param array -link to int vector.
 * */
void Lulu::Sorts::mergeSort(std::vector<int> &array) {
    int left = 0;
    int right = array.size() - 1;
    if (0 < right - left) {
        // Left border, right border.
        int leftB, rightB, mid;
        for (int k = 1; k <= right; k *= 2) {
            leftB = left;
            rightB = 2 * k - 1;

            while (leftB < right) {
                if (rightB > right) {
                    rightB = right;
                }
                mid = leftB + k - 1;
                if (mid > right) {
                    mid = right;
                }

                mergeLists(array, leftB, mid, mid + 1, rightB);

                // Move righter.
                leftB = rightB + 1;
                rightB += 2 * k;
            }
        }
    }
}

/**
 *
 * @brief Method for merging two sorted parts of array.
 *
 * @param array -link to int vector.
 * @param firstStart -start index of first part.
 * @param firstEnd -end index of first part
 * @param secondStart -start index of second part.
 * @param secondEnd -end index of second part.
 */
void mergeLists(std::vector<int>& array, int firstStart, int firstEnd, int secondStart,
                int secondEnd) {
    if (firstStart > secondEnd) {
        return;
    }
    int finalStart = firstStart;
    int final_end = secondEnd;
    // Free position of result vector.
    int indexC = 0;
    std::vector<int> result(secondEnd - firstStart + 1);
    while (firstStart <= firstEnd && secondStart <= secondEnd) {
        if (array[firstStart] < array[secondStart]) {
            result[indexC] = array[firstStart];
            firstStart++;
        } else {
            result[indexC] = array[secondStart];
            secondStart++;
        }
        indexC++;
    }

    if (firstStart <= firstEnd) {
        for (int i = firstStart; i <= firstEnd; ++i) {
            result[indexC] = array[i];
            indexC++;
        }
    } else {
        for (int i = secondStart; i <= secondEnd; ++i) {
            result[indexC] = array[i];
            indexC++;
        }
    }

    indexC = 0;
    for (int i = finalStart; i <= final_end; ++i) {
        array[i] = result[indexC];
        indexC++;
    }
}