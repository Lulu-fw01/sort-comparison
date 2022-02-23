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
    srand(static_cast<unsigned int>(time(nullptr)));
    std::vector<int> vec = Lulu::Utils::getRandomVector(100, 1, 100);
    std::cout << Lulu::Sorts::Time::noteTheTime(Lulu::Sorts::quickSortByHoare, vec) << std::endl;

    Lulu::Utils::printVector(vec);
    return 0;
}
