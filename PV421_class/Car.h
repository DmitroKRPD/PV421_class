#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car
{
	string mark;
	string model;
	int yearCreat;

public:
	void showCar();

	string getModel();
	string getMark();
	int getYear();

	void setModel(string m);
	void setMark(string m);
	void setYear(int y);
};

