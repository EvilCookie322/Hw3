//
// Created by Alexander on 20.06.2018.
// https://informatics.msk.ru/mod/statements/view3.php?id=280&chapterid=333

#include <math.h>
#include "Task.h"

void Task(int a, int b)
{
    for (int i = a; i <= b; i++){
        if (i % 2 == 0) printf("%d\n", i);
    }
}