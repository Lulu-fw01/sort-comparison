//
// Created by luka on 22.02.2022.
//

#include <chrono>
#include <iostream>

#include "Lulu/Sorts/Time/NoteTime.h"
#include "Lulu/Utils/Funcs.h"

/**
 * Function for counting sort function working time.
 *
 * @param sortFunction function which will sort array.
 * @param array int vector which should be sorted.
 *
 * @return long long value of time in nanoseconds.
 * */
long long Lulu::Sorts::Time::noteTheTime(void(*sortFunction) (std::vector<int> &), std::vector<int> array) {
    // Get time in the present moment.
    auto start = std::chrono::high_resolution_clock::now();
    // Run sort function.
    sortFunction(array);
    // Again get time in the present moment.
    // And count the difference.
    auto elapsed = std::chrono::high_resolution_clock::now() - start;
    if (Lulu::Utils::isSorted(array)) {
        std::cout << "Sorted" << std::endl;
    } else {
        std::cout << "Not sorted" << std::endl;
    }
    // Get nanoseconds from the time.
    long long nanoseconds =
            std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();

    return nanoseconds;
}