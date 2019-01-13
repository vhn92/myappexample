/*
 * Point2D.cpp
 *
 *  Created on: 12 sty 2019
 *      Author: Pawe³
 */
#include <iostream>
#include "Point2D.h"

using namespace std;


	Point2D::Point2D(){

	}
	Point2D::Point2D(int x = 0, int y = 0){
		this->x = x;
		this->y = y;
		//cout << "Obiekt utworzono" << endl;
	}
	Point2D::Point2D(const Point2D &p){
		this->x = p.x;
		this->y = p.y;
	}
	Point2D::~Point2D(){
		//cout << "Obiekt usunieto" << endl;
	}



	int Point2D::getX() const {
		return x;
	}

	void Point2D::setX(int x) {
		this->x = x;
	}

	int Point2D::getY() const {
		return y;
	}

	void Point2D::setY(int y) {
		this->y = y;
	}

	ostream& operator<< (ostream &wyjscie, const Point2D &p) {
		   return wyjscie << "x = " <<p.x << " ; " << "y = " <<p.y<<endl;
		 }


