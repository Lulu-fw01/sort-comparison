//
// Created by luka on 16.02.2022.
//

#ifndef SORT_COMPARISON_BUBBLESORT_H
#define SORT_COMPARISON_BUBBLESORT_H

#include <vector>

namespace LuluSorts {

    /**
     * @brief Bubble sort with 1st and 2nd Iverson's
     * conditions.
     *
     * @param array -pointer to int vector.
     * */
    void bubbleSortByIversonFull(std::vector<int> *array);

    /**
     * @brief Bubble sort with 1st Iverson's
     * condition.
     *
     * @param array -pointer to int vector.
     * */
    void bubbleSortByIversonHalf(std::vector<int> *array);

    /**
    * @brief Classic bubble sort.
    *
    * @param array -pointer to int vector.
    * */
    void bubbleSortClassic(std::vector<int> *array);
}
#endif //SORT_COMPARISON_BUBBLESORT_H
