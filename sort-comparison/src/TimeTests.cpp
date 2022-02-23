//
// Created by luka on 23.02.2022.
//

#include <iostream>

#include "Lulu/Sorts/Time/TimeTests.h"
#include "Lulu/Sorts/Time/NoteTime.h"
#include "Lulu/Utils/Funcs.h"
#include "Lulu/Sorts/SelectionSort.h"
#include "Lulu/Sorts/BubbleSort.h"
#include "Lulu/Sorts/InsertionSort.h"
#include "Lulu/Sorts/CountingSort.h"
#include "Lulu/Sorts/RadixSort.h"
#include "Lulu/Sorts/MergeSort.h"
#include "Lulu/Sorts/QuickSort.h"
#include "Lulu/Sorts/HeapSort.h"


void Lulu::Sorts::Time::testSorts(std::vector<int>& arr) {
    std::cout << "Selection sort: " << "Time: "<<  Lulu::Sorts::Time::noteTheTime(selectionSort, arr) << std::endl;

    std::cout << "Classic bubble sort: " << "Time: " << Lulu::Sorts::Time::noteTheTime(bubbleSortClassic, arr) << std::endl;

    std::cout << "1st Iverson's condition bubble sort: " << "Time: " << Lulu::Sorts::Time::noteTheTime(bubbleSortByIversonFirst, arr) << std::endl;

    std::cout << "1st and 2nd Iverson's condition bubble sort: " << "Time: " << Lulu::Sorts::Time::noteTheTime(bubbleSortByIversonFull, arr) << std::endl;

    std::cout << "Insertion sort: " << "Time: " << Lulu::Sorts::Time::noteTheTime(insertionSort, arr) << std::endl;

    std::cout << "Binary insertion sort: " << "Time: " << Lulu::Sorts::Time::noteTheTime(binaryInsertionSort, arr) << std::endl;

    std::cout << "Counting sort: " << "Time: " << Lulu::Sorts::Time::noteTheTime(countingSort, arr) << std::endl;

    std::cout << "Radix sort: " << "Time: " << Lulu::Sorts::Time::noteTheTime(radixSort, arr) << std::endl;

    std::cout << "Merge sort: " << "Time: " << Lulu::Sorts::Time::noteTheTime(mergeSort, arr) << std::endl;

    std::cout << "Quick sort by Hoare: " << "Time: " << Lulu::Sorts::Time::noteTheTime(quickSortByHoare, arr) << std::endl;

    std::cout << "Quick sort by Lomuto: " << "Time: " << Lulu::Sorts::Time::noteTheTime(quickSortByLomuto, arr) << std::endl;

    std::cout << "Heap sort: " << "Time: " << Lulu::Sorts::Time::noteTheTime(heapSort, arr) << std::endl;
}


/**
 * @brief first test use array with elements in segment [0, 5].
 *
 * */
void Lulu::Sorts::Time::timeTest1() {
    auto referenceArray = Lulu::Utils::getRandomVector(4100, 0, 5);

    std::vector<int> usedArray;
    std::cout << "-----------------------------------Time Test 1 START-----------------------------------" << std::endl;

    std::cout << "\t1st group" <<std::endl;
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 5]" << std::endl;
    for (int i = 50; i <= 300; i += 10) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray);
    }

    std::cout << "\t2nd group" <<std::endl;
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 5]" << std::endl;
    for (int i = 100; i <= 4100; i += 100) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray);
    }

    std::cout << "-----------------------------------Time Test 1 END-----------------------------------" << std::endl;
}


/**
 * @brief first test use array with elements in segment [0, 5].
 *
 * */
void Lulu::Sorts::Time::timeTest2() {
    auto referenceArray = Lulu::Utils::getRandomVector(4100, 0, 5);

    std::vector<int> usedArray;
    std::cout << "-----------------------------------Time Test 1 START-----------------------------------" << std::endl;

    std::cout << "\t1st group" <<std::endl;
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 5]" << std::endl;
    for (int i = 50; i <= 300; i += 10) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray);
    }

    std::cout << "\t2nd group" <<std::endl;
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 5]" << std::endl;
    for (int i = 100; i <= 4100; i += 100) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray);
    }

    std::cout << "-----------------------------------Time Test 1 END-----------------------------------" << std::endl;
}

