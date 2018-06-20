//
// Created by Alexander on 20.06.2018.
//

#include "Map.h"

void Multiply3(int* array){
    array[0] += 3;
}

void map(struct Array* array, void (*f) (int*)){
    for (int i = 0; i < array->length; i++) f(array->data + i);
}