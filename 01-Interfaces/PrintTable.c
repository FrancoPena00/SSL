#include "PrintTable.h"
#include <stdio.h>

void PrintFila(int num1, double num2){
    printf("%3d %6.1f\n", num1, num2);
}

void PrintFilas(double (*function)(int), int start, int finish, int step){
    for(; start <= finish; start = start + step )
        PrintFila(start, function(start));
}