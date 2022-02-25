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
#include <fstream>

#include "Lulu/Sorts/Time/TimeTests.h"


int main(int argc, char* argv[]) {
    srand(static_cast<unsigned int>(time(nullptr)));

    std::string filePath = "output.csv";
    std::string fileFlag = "-f";
    if (argc >= 3) {
        if (fileFlag == argv[1]) {
            filePath = argv[2];
        }
    }

    std::ofstream outputFile;
    outputFile.open(filePath);

    Lulu::Sorts::Time::timeTest1(outputFile);
    Lulu::Sorts::Time::timeTest2(outputFile);
    Lulu::Sorts::Time::timeTest3(outputFile);
    Lulu::Sorts::Time::timeTest4(outputFile);

    outputFile.close();


    return 0;
}
