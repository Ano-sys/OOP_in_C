//
// Created by Timo Niemann on 19.09.24.
//

#ifndef OOP_IN_C_CAR_H
#define OOP_IN_C_CAR_H

typedef enum{
    AlphaRomeo,
    BMW,
    Ferrari,
    Lamborghini,
    Mazda,
    MercedesBenz
}Brand;

typedef struct Car{
    int max_speed;
    int tire_count;
    Brand brand;
    char *(*toString)(struct Car*);
} Car;

Car *newCar(int, int, Brand);

#endif //OOP_IN_C_CAR_H
