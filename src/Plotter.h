/*
 * Plotter.h
 *
 *  Created on: Jan 22, 2019
 *      Author: alexander
 */

#include <iostream>
#include<stdio.h>
#ifndef PLOTTER_H_
#define PLOTTER_H_
using namespace std;

namespace Plotter {
enum PlotType {
	LINES, POINTS
};
void InitScriptfile(string targetFile, string title);
void AddDatafile(string dataFile, PlotType type);
void doPlot();
void clearScriptfile();
}

#endif /* PLOTTER_H_ */
