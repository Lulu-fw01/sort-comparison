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


void createTableHat(std::ofstream& outputStream) {
    outputStream << "array size,Selection sort,Classic bubble sort,1st Iverson's condition bubble sort,"
                    "1st and 2nd Iverson's condition bubble sort,Insertion sort,Binary insertion sort,"
                    "Counting sort,Radix sort,Merge sort,Quick sort by Hoare,Quick sort by Lomuto,Heap sort\n";
}

void Lulu::Sorts::Time::testSorts(std::vector<int>& arr, std::ofstream& outputStream) {
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
 * */
void Lulu::Sorts::Time::timeTest1(std::ofstream& outputStream) {
    auto referenceArray = Lulu::Utils::getRandomVector(4100, 0, 5);

    std::vector<int> usedArray;
    std::cout << std::endl << "-----------------------------------Time Test 1 START-----------------------------------" << std::endl;

    outputStream << "\n\n";
    std::cout << "\t1st group" <<std::endl;
    outputStream << "numbers: [0, 5]\n";
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 5]" << std::endl;
    createTableHat(outputStream);
    for (int i = 50; i <= 300; i += 10) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray, outputStream);
    }

    outputStream << "\n\n";
    std::cout << "\t2nd group" <<std::endl;
    outputStream << "numbers: [0, 5]\n";
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
 * @brief first test use array with elements in segment [0, 4000].
 *
 * */
void Lulu::Sorts::Time::timeTest2(std::ofstream& outputStream) {
    auto referenceArray = Lulu::Utils::getRandomVector(4100, 0, 4000);

    std::vector<int> usedArray;
    std::cout << std::endl << "-----------------------------------Time Test 2 START-----------------------------------" << std::endl;

    outputStream << "\n\n";
    std::cout << "\t1st group" <<std::endl;
    outputStream << "numbers: [0, 4000]\n";
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 4000]" << std::endl;
    createTableHat(outputStream);
    for (int i = 50; i <= 300; i += 10) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray, outputStream);
    }

    outputStream << "\n\n";
    std::cout << "\t2nd group" <<std::endl;
    outputStream << "numbers: [0, 4000]\n";
    std::cout << "\t\tInfo:\n\t\t\tnumbers: [0, 4000]" << std::endl;
    createTableHat(outputStream);
    for (int i = 100; i <= 4100; i += 100) {
        std::cout << "\n\t\t\tSize: " << i << std::endl;
        usedArray = std::vector<int>(referenceArray.begin(), referenceArray.begin() + i);
        testSorts(usedArray, outputStream);
    }

    std::cout << std::endl << "-----------------------------------Time Test 2 END-----------------------------------" << std::endl;
}


void Lulu::Sorts::Time::timeTest3(std::ofstream& outputStream) {

}

void Lulu::Sorts::Time::timeTest4(std::ofstream& outputStream) {

}