//
// Created by luka on 23.02.2022.
//

#include <iostream>
#include <algorithm>

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

/**
 * @brief This function creates table's hat
 * in csv file.
 *
 * @param outputStream stream of csv file.
 * */
void createTableHat(std::ofstream& outputStream) {
    outputStream << "array size,Selection sort,Classic bubble sort,1st Iverson's condition bubble sort,"
                    "1st and 2nd Iverson's condition bubble sort,Insertion sort,Binary insertion sort,"
                    "Counting sort,Radix sort,Merge sort,Quick sort by Hoare,Quick sort by Lomuto,Heap sort\n";
}

/**
 * @brief Function which writes sort functions work time into csv file.
 *
 * @param arr array on which will be tests.
 * @param outputStream stream of csv file.
 * */
void Lulu::Sorts::Time::testSorts(const std::vector<int>& arr, std::ofstream& outputStream) {
    // Write array size into file.
    outputStream << arr.size() << ",";

    auto time = Lulu::Sorts::Time::noteTheTime(selectionSort, arr);
    outputStream << time << ",";
    std::cout << "Selection sort\nTime: "<< time << std::endl;

    time = Lulu::Sorts::Time::noteTheTime(bubbleSortClassic, arr);
    outputStream << time << ",";
    std::cout << "Classic bubble sort\nTime: " << time << std::endl;

    time = Lulu::Sorts::Time::noteTheTime(bubbleSortByIversonFirst, arr);
    outputStream << time << ",";
    std::cout << "1st Iverson's condition bubble sort\nTime: " << time << std::endl;

    time = Lulu::Sorts::Time::noteTheTime(bubbleSortByIversonFull, arr) ;
    outputStream << time << ",";
    std::cout << "1st and 2nd Iverson's condition bubble sort\nTime: " << time << std::endl;

    time = Lulu::Sorts::Time::noteTheTime(insertionSort, arr);
    outputStream << time << ",";
    std::cout << "Insertion sort\nTime: " << time << std::endl;

    time = Lulu::Sorts::Time::noteTheTime(binaryInsertionSort, arr);
    outputStream << time << ",";
    std::cout << "Binary insertion sort\nTime: " << time << std::endl;

    time = Lulu::Sorts::Time::noteTheTime(countingSort, arr);
    outputStream << time << ",";
    std::cout << "Counting sort\nTime: " << time << std::endl;

    time = Lulu::Sorts::Time::noteTheTime(radixSort, arr);
    outputStream << time << ",";
    std::cout << "Radix sort\nTime: " << time<< std::endl;

    time = Lulu::Sorts::Time::noteTheTime(mergeSort, arr);
    outputStream << time << ",";
    std::cout << "Merge sort\nTime: " << time << std::endl;

    time = Lulu::Sorts::Time::noteTheTime(quickSortByHoare, arr);
    outputStream << time << ",";
    std::cout << "Quick sort by Hoare\nTime: " << time << std::endl;

    time = Lulu::Sorts::Time::noteTheTime(quickSortByLomuto, arr);
    outputStream << time << ",";
    std::cout << "Quick sort by Lomuto\nTime: " << time << std::endl;

    time = Lulu::Sorts::Time::noteTheTime(heapSort, arr);
    outputStream << time << "\n";
    std::cout << "Heap sort\nTime: " << time << std::endl;
}


/**
 * @brief first test use array with elements in segment [0, 5].
 *
 * @param outputStream stream of csv file.
 * */
void Lulu::Sorts::Time::timeTest1(std::ofstream& outputStream) {
    auto referenceArray = Lulu::Utils::getRandomVector(4100, 0, 5);

    std::vector<int> usedArray;
    std::cout << std::endl << "-----------------------------------Time Test 1 START-----------------------------------" << std::endl;

    outputStream << "\n\n";
    std::cout << "\t1st group" <<std::endl;
    outputStream << "numbers: [0, 5] not sorted array\n";
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 5]" << std::endl;
    createTableHat(outputStream);
    for (int i = 50; i <= 300; i += 10) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray, outputStream);
    }

    outputStream << "\n\n";
    std::cout << "\t2nd group" <<std::endl;
    outputStream << "numbers: [0, 5] not sorted array\n";
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 5]" << std::endl;
    createTableHat(outputStream);
    for (int i = 100; i <= 4100; i += 100) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray, outputStream);
    }

    std::cout << std::endl << "-----------------------------------Time Test 1 END-----------------------------------" << std::endl;
}


/**
 * @brief Second test use array with elements in segment [0, 4000].
 *
 * @param outputStream stream of csv file.
 * */
void Lulu::Sorts::Time::timeTest2(std::ofstream& outputStream) {
    auto referenceArray = Lulu::Utils::getRandomVector(4100, 0, 4000);

    std::vector<int> usedArray;
    std::cout << std::endl << "-----------------------------------Time Test 2 START-----------------------------------" << std::endl;

    outputStream << "\n\n";
    std::cout << "\t1st group" <<std::endl;
    outputStream << "numbers: [0, 4000] not sorted array\n";
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 4000]" << std::endl;
    createTableHat(outputStream);
    for (int i = 50; i <= 300; i += 10) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray, outputStream);
    }

    outputStream << "\n\n";
    std::cout << "\t2nd group" <<std::endl;
    outputStream << "numbers: [0, 4000] not sorted array\n";
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 4000]" << std::endl;
    createTableHat(outputStream);
    for (int i = 100; i <= 4100; i += 100) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray, outputStream);
    }

    std::cout << std::endl << "-----------------------------------Time Test 2 END-----------------------------------" << std::endl;
}

/**
 * @brief Third test use corrupted sorted array.
 *
 * @param outputStream stream of csv file.
 * */
void Lulu::Sorts::Time::timeTest3(std::ofstream& outputStream) {
    auto referenceArray = Lulu::Utils::getRandomVector(4100, 0, 4000);
    Lulu::Utils::messUpTheArray(referenceArray);

    std::vector<int> usedArray;
    std::cout << std::endl << "-----------------------------------Time Test 3 (corrupted sorted array) START-----------------------------------" << std::endl;

    outputStream << "\n\n";
    std::cout << "\t1st group" << std::endl;
    outputStream << "numbers: [0, 4000] corrupted sorted array\n";
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 4100]" << std::endl;
    createTableHat(outputStream);
    for (int i = 50; i <= 300; i += 10) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray, outputStream);
    }

    outputStream << "\n\n";
    std::cout << "\t2nd group" <<std::endl;
    outputStream << "numbers: [0, 4000] corrupted sorted array\n";
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 4000]" << std::endl;
    createTableHat(outputStream);
    for (int i = 100; i <= 4100; i += 100) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray, outputStream);
    }

    std::cout << std::endl << "-----------------------------------Time Test 3 END-----------------------------------" << std::endl;

}


/**
 * @brief Fourth test use reversed sorted array with elements in segment [1, 4100].
 *
 * @param outputStream output csv file.
 * */
void Lulu::Sorts::Time::timeTest4(std::ofstream& outputStream) {
    auto referenceArray = Lulu::Utils::getRandomVector(4100, 1, 4100);
    quickSortByHoare(referenceArray);
    std::reverse(referenceArray.begin(), referenceArray.end());

    std::vector<int> usedArray;
    std::cout << std::endl << "-----------------------------------Time Test 4 (reverse array) START-----------------------------------" << std::endl;

    outputStream << "\n\n";
    std::cout << "\t1st group" <<std::endl;
    outputStream << "numbers: [1, 4100] array sorted in reverse order\n";
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [1, 4100]" << std::endl;
    createTableHat(outputStream);
    for (int i = 50; i <= 300; i += 10) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray, outputStream);
    }

    outputStream << "\n\n";
    std::cout << "\t2nd group" <<std::endl;
    outputStream << "numbers: [1, 4100] array sorted in reverse order\n";
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [1, 4100]" << std::endl;
    createTableHat(outputStream);
    for (int i = 100; i <= 4100; i += 100) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray, outputStream);
    }

    std::cout << std::endl << "-----------------------------------Time Test 4 END-----------------------------------" << std::endl;
}