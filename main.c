#include <stdio.h>
#include <stdlib.h>
#include "car.h"

int main() {
    Car *car = newCar(214, 4, Mazda);
    char *s = car->toString(car);
    printf("This is my Car:\n%s\n", s);
    free(s);
    free(car);
    return 0;
}
