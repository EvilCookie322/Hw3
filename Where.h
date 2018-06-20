//
// Created by Alexander on 20.06.2018.
//

#ifndef UNTITLED_WHERE_H
#define UNTITLED_WHERE_H

#endif //UNTITLED_WHERE_H

#include <stdbool.h>
//#include "Map.h"
struct Array1{
    int* data;
    int length;
};

bool MoreThan7(int array);
struct Array1* where(struct Array1* array, bool (*f) (int));