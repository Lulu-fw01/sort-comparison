//
// Created by luka on 22.02.2022.
//

#include "Lulu/Sorts/Time/NoteTime.h"

void Lulu::Sorts::Time::noteTheTime(void(*sortFunction) (std::vector<int> &), std::vector<int>& array) {
    sortFunction(array);
}