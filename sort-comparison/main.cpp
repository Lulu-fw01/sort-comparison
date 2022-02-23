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

#include "Lulu/Sorts/Time/TimeTests.h"


int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    Lulu::Sorts::Time::timeTest1();
    Lulu::Sorts::Time::timeTest2();


    return 0;
}
