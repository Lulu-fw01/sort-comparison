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
        int left_b, right_b, mid;
        for (int k = 1; k <= right; k *= 2) {
            left_b = left;
            right_b = 2 * k - 1;

            while (left_b < right) {
                if (right_b > right) {
                    right_b = right;
                }
                mid = left_b + k - 1;
                if (mid > right) {
                    mid = right;
                }

                mergeLists(array, left_b, mid, mid + 1, right_b);

                // Move righter.
                left_b = right_b + 1;
                right_b += 2 * k;
            }
        }
    }
}

/**
 *
 * @brief Method for merging two sorted parts of array.
 *
 * @param array -link to int vector.
 * @param first_start -start index of first part.
 * @param first_end -end index of first part
 * @param second_start -start index of second part.
 * @param second_end -end index of second part.
 */
void mergeLists(std::vector<int>& array, int first_start, int first_end, int second_start,
                int second_end) {
    if (first_start > second_end) {
        return;
    }
    int final_start = first_start;
    int final_end = second_end;
    int index_c = 0;
    std::vector<int> result(second_end - first_start + 1);
    while (first_start <= first_end && second_start <= second_end) {
        if (array[first_start] < array[second_start]) {
            result[index_c] = array[first_start];
            first_start++;
        } else {
            result[index_c] = array[second_start];
            second_start++;
        }
        index_c++;
    }

    if (first_start <= first_end) {
        for (int i = first_start; i <= first_end; ++i) {
            result[index_c] = array[i];
            index_c++;
        }
    } else {
        for (int i = second_start; i <= second_end; ++i) {
            result[index_c] = array[i];
            index_c++;
        }
    }

    index_c = 0;
    for (int i = final_start; i <= final_end; ++i) {
        array[i] = result[index_c];
        index_c++;
    }
}