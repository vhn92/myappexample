/*
 * main.cpp
 *
 *  Created on: 12 sty 2019
 *      Author: Pawe³
 */

#include <iostream>
#include <vector>
#include <string>
#include "Point2D.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void fillVector(vector<Point2D>& vec, int num_of_items, int num1, int num2);


int main(int argc, char **argv) {
	srand(time(0));
	vector<Point2D> vecOfPoints;
	fillVector(vecOfPoints, 10, 5, 25);
	int size = vecOfPoints.size();
	for(int i = 0; i < size; i++)
		cout << vecOfPoints[i];

	return 0;
}

void fillVector(vector<Point2D>& vec, int num_of_items, int num1, int num2){
	for(int i = 0; i < num_of_items; i++){
		int a = rand()%(num2-num1)+num1;
		int b = rand()%(num2-num1)+num1;
		Point2D myPoint(a,b);
		vec.push_back(myPoint);
	}
}



