#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	Rect *p = &R1;
	Rect *q = &R2;
	double rx,ry;

	double x1 = p->x; double x2 = q->x; 
	double y1 = p->y; double y2 = q->y;
	double w1 = p->w; double w2 = q->w;
	double h1 = p ->h; double h2 = q->h;


	double rx = max(0.0, min(R1.x + R1.w, R2.x + R2.w) - max(R1.x, R2.x));
    double ry = max(0.0, min(R1.y, R2.y) - max(R1.y - R1.h, R2.y - R2.h));
	// //x
	// if((x2<x1)&&(x1+w1)>x2){
	// 	rx = (x1+w1-x2);
	// }else if ((x1<x2)&&(x2+w2)>x1)
	// {
	// 	rx = (x2+w2-x1);
	// }else if (((x1+w1)<x2)||((x2+w2)<x1)) rx = 0.0;
	// else if ((x2 > x1)&&(x2+w2<x1+w1)){
	// 	rx = w2;
	// }
	// else {
	// 	rx = w1;
	// }

	// if( (y1>y2) && (y2 > y1+h1)) ry = (y2-y1+h1);
	// else if ((y2>y1) && (y1>y2+h2)) ry = (y1-y2+h2);
	// else if((y1>y2)&&((y2+h2)<(y1+h1))) ry = h2;
	// else if ((y2 > y1)&&((y1+h1)<(y2+h2))) ry = h1;
	// else ry = 0.0;

	cout << rx << " " << ry << endl;

	
	return rx*ry;
}

int main(){
	Rect R1,R2;
	R1 = {1,1,5,5};
	R2 = {2,2,5,5};	
	cout << overlap(R1,R2);
	cout << endl;
	R1 = {1,1,5,5};
	R2 = {7,2,3,3};	
	cout << overlap(R1,R2);
	cout << endl;
	R1 = {-1,2,6.9,9.6};
	R2 = {0,0,1.2,2.5};	
	cout << overlap(R1,R2);
	cout << endl;	
}

