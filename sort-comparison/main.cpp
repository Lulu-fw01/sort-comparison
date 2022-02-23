/**
 *
 * ПиАА 2022, Лука Марков, БПИ205
 *
 * Clion, Linux ubuntu
 *
 * Что сделано:
 *
 * */


#include <iostream>
#include <vector>

#include "Lulu/Sorts/QuickSort.h"
#include "Lulu/Sorts/Time/NoteTime.h"
#include "Lulu/Utils/Funcs.h"


int main() {
    std::vector<int> vec{7, 5, 26, 32, 54, 8, 90, 3, 45, 7, 89, 5, 43, 9, 1, 1, 5, 45, 901, 4, 2, 45, 44, 6, 78, 4, 108, 203, 1};
    std::cout << Lulu::Sorts::Time::noteTheTime(Lulu::Sorts::quickSortByHoare, vec);

    return 0;
}
