/*
 * Spinset.h
 *
 *  Created on: Jan 28, 2019
 *      Author: alexander
 */

#ifndef SPINSET_H_
#define SPINSET_H_
#include <iostream>
#include <stdio.h>
#include <random>
#include "Matrix.h"
using namespace std;

class Spinset {
private:
	int size;
	double* spins;
	double getForce(int index, Matrix matrix);
	mt19937 random;
public:
	double temp;
	Spinset(int size);
	void seed(int seed);
	void Randomize(bool bin);
	void SetSpin(int index, double value);
	double getEnergy(Matrix matrix);
	double getPreferredSpin(int index, Matrix matrix);
	double getSpin(int index);
	string getSpins();
	int getSize();
};

#endif /* SPINSET_H_ */
