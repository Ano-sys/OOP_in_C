//
// Created by Timo Niemann on 19.09.24.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "car.h"

#define TOSTRING_STR_LENGTH 256


char *getBrand(Brand brand){
    char *s = (char*)malloc(sizeof(char) * 32);
    switch(brand) {
        case AlphaRomeo:
            snprintf(s, 32, "Alpha Romeo");
            break;
        case BMW:
            snprintf(s, 32, "BMW");
            break;
        case Ferrari:
            snprintf(s, 32, "Ferrari");
            break;
        case Lamborghini:
            snprintf(s, 32, "Lamborghini");
            break;
        case Mazda:
            snprintf(s, 32, "Mazda");
            break;
        case MercedesBenz:
            snprintf(s, 32, "Mercedes Benz");
            break;
        default:
            snprintf(s, 32, "NOT OF KNOWN BRAND");
            break;
    }
    return s;
}

char *toString(Car *car){
    char *out = (char*)malloc(sizeof(char) * TOSTRING_STR_LENGTH);
    char *brand = getBrand(car->brand);
    snprintf(out, TOSTRING_STR_LENGTH, "Max Speed: %d\nTire Count: %d\nBrand: %s\n", car->max_speed, car->tire_count, brand);
    free(brand);
    return out;
}

Car *newCar(int max_speed, int tire_count, Brand brand){
    Car *car = (Car*)malloc(sizeof(Car));
    car->max_speed = max_speed;
    car->tire_count = tire_count;
    car->brand = brand;
    car->toString = toString;
    return car;
}
