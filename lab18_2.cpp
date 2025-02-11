#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
	double rx,ry;
	
	rx = max(0.0, min(R1->x + R1->w, R2->x + R2->w) - max(R1->x, R2->x));
    ry = max(0.0, min(R1->y, R2->y) - max(R1->y - R1->h, R2->y - R2->h));
    
    return rx*ry;

}

int main(){
	Rect R1,R2;
	R1 = {1,1,5,5};
	R2 = {2,2,5,5};	
	cout << overlap(&R1,&R2);
	cout << endl;
	R1 = {1,1,5,5};
	R2 = {7,2,3,3};	
	cout << overlap(&R1,&R2);
	cout << endl;
	R1 = {-1,2,6.9,9.6};
	R2 = {0,0,1.2,2.5};	
	cout << overlap(&R1,&R2);
	cout << endl;	
}