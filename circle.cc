//Matthew O'Connell
#include "circle.h"
#include <cmath>
#define PI (4*atan(1))

//function definitions
double circle::distance(){
	return sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
}

double circle::radius(){
	return distance();
}
double circle::area(){
	return PI * pow(radius(), 2);
}
double circle::circumference(){
	return 2 * PI * radius();
}
double circle::populate_classobj(double x1, double y1, double x2, double y2){
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}