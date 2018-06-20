//
// Created by Alexander on 20.06.2018.
//

#include <malloc.h>
#include <stdio.h>
#include "MapTest.h"



void MapTest (){//equal arrays
    printf("Map test equal data: ");
    struct Array array1, array2;
    array1.length = array2.length = 5;
    array1.data = (int*)malloc(sizeof(int)*5);
    array2.data = (int*)malloc(sizeof(int)*5);
    for (int i = 0; i < 5; i++) {
        array1.data[i] = i;
        array2.data[i] = i + 3;
    }
    void (*m3)(int*) = Multiply3;
    map (&array1, m3);
    for (int i = 0; i < 5; i++)
    if (array1.data[i] != array2.data[i]){
        printf("failed\n");
        break;
    }
    printf("passed\n");
    printf("Map test equal length: ");
    if (array1.length == array2.length)
        printf("passed\n");
    free(array1.data);
    free(array2.data);
}
