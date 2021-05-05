#include "Conversion.h"
#include "PrintTable.h"
#include "assert.h"
#include <stdio.h>


double Celsius(int f){
    return (5.0*(f-32.0))/9.0;
}

double Farenheit(int c){
    return ((c*9.0)/5.0)+32;
}

void PrintTablaCelsius(){
    printf(" F\tC\n");
    PrintFilas(Celsius,0,300,20);
}

void PrintTablaFarenheit(){
    printf(" C\tF\n");
    PrintFilas(Farenheit,0,300,20);
}


