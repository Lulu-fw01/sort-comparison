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
 * @return long long value of average time in nanoseconds.
 * */
long long Lulu::Sorts::Time::noteTheTime(void(*sortFunction) (std::vector<int> &), const std::vector<int>& array) {
    long long timeSum = 0;
    std::vector<int> workArray;
    for (int i = 0; i < 13; ++i) {
        workArray = array;
        if (i < 3) {
            sortFunction(workArray);
            continue;
        }
        // Get time in the present moment.
        auto start = std::chrono::high_resolution_clock::now();
        // Run sort function.
        sortFunction(workArray);
        // Again get time in the present moment.
        // And count the difference.
        auto elapsed = std::chrono::high_resolution_clock::now() - start;
        if (!Lulu::Utils::isSorted(workArray)) {
            std::cout << "NOT SORTED!!!" << std::endl;
        }
        // Get nanoseconds from the time.
        long long nanoseconds =
                std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        timeSum += nanoseconds;
    }

    return timeSum / 10;
}