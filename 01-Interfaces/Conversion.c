#include "Conversion.h"
#include "assert.h"
#include <stdio.h>


double Celsius(double f){
    assert(f <= 300);
    return (5.0/9.0)*(f-32);
}

double Farenheit(double c){
    assert(c <= 300);
    return (c*(9.0/5.0))+32;
}

void PrintFila(int num1, double num2){
    printf("%3d %6.1f\n", num1, num2);
}

void PrintTablaCelsius(){
    printf(" F\tC\n");
    for(int fahr = 0; fahr <= 300; fahr = fahr + 20)
        PrintFila(fahr, Celsius(fahr));
}

void PrintTablaFarenheit(){
    printf(" C\tF\n");
    for(int cels = -20; cels <= 280; cels = cels + 20)
        PrintFila(cels, Farenheit(cels));
}


