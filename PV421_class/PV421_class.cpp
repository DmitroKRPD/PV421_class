﻿#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    Car c1, c2;
    cout << sizeof(c1)<<endl;

    c1.setMark("BMW");
    c1.setModel("X5");
    c1.setYear(2023);

    c2.setMark("Renault");
    c2.setModel("fdfskj");
    c2.setYear(2024);

    c1.showCar();
    c2.showCar();
}

