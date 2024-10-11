#include <iostream>
#include "Car.h"

void Car::showCar() {
	cout << mark << " " << model << " " << yearCreat << endl;
}
string Car::getModel() {
	return model;
}

string Car::getMark() {
	return model;
}

int Car::getYear() {
	return yearCreat;
}

void Car::setModel(string m) {
	model = m;
}

void Car::setMark(string m) {
	mark = m;
}

void Car::setYear(int y) {
	yearCreat = y;
}
