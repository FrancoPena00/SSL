#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

void PrintTablas();

int main(void){
    assert(Celsius(0)==-17.8);
    assert(Celsius(60)==15.6);
    assert(Farenheit(0)==32);
    assert(Farenheit(60)==140);
    PrintTablas();
    
}

void PrintTablas(){
    PrintTablaCelsius();
    PrintTablaFarenheit();
}


