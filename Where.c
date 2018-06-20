//
// Created by Alexander on 20.06.2018.
//

#include "Where.h"
#include <malloc.h>

bool MoreThan7(int array){
    if (array > 7) return true;
}

struct Array1* where(struct Array1* array, bool (*f) (int)) {
    struct Array1 array1;
    array1.length = array->length;
    array1.data = (int*)malloc(sizeof(int) * array->length);
    int k = 0;
    for (int i = 0; i < array->length; i++ )
        if (f(array->data[i]) == true) {
        array1.data[k] = array->data[i];
        k += 1;
    }
    array->data = array1.data;
    free(array1.data);
    return &array1;
}
