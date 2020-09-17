//
// pch.cpp
// Include the standard header and generate the precompiled header.
//
#include<iostream>
#include "pch.h"
#include<math.h>
enum Quadrant {
	Q1=0, Q2=1,
	Q3=2,
	Q4=3
};
Point::Point():m_x(0),m_y(0){}
Point::Point(int a,int b):m_x(a),m_y(b){}
Point::Point(const Point& ref) {
	m_x = ref.m_x;
	m_y = ref.m_y;
}
double Point::distanceFromOrigin() {
	int dis;
	int a;
	a = pow(m_x, 2) + pow(m_y, 2);
	dis = pow(a, 0.5);
	return dis;
}
void Point::quadrant() {
	if (m_x<0 && Point::m_y < 0) {
		std::cout << "Q4";
	}
	else if(m_x<0 && m_y>-1){
		std::cout << "Q2";
	}
	else if (m_x > -1 && m_y < 0) {
		std::cout << "Q3";
	}
	else {
		std::cout << "Q1";
	}
}
void Point::isOrigin() {
	if (m_x == 0 && m_y == 0) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
void Point::isOnXaxis() {
	if (m_y == 0) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
void Point::isOnYaxis() {
	if (m_x == 0) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
void Point::display() {
	std::cout << m_x << "," << m_y;
}