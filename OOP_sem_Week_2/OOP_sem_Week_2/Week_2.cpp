#include <iostream>

using namespace std;

class MyClass {
	

};


struct Point3D {

	double x;
	double y;
	double z;

	Point3D(double _x, double _y, double _z) {
		x = _x;
		y = _y;
		z = _z;
	}

	void print() {

		cout << x << " " << y << " " << z << endl;
	}

	void move(double _x, double _y, double _z) { //& e nujen kogato pravim promeni 
												 //vurhu promenlivite ot "point".

		x += _x;
		y += _y;
		z += _z;

		cout << x << " " << y << " " << z << endl;

	}

	void move_X(double _x) {
		//Murdame koordinatite po X.
		x += _x;
	}

};

void move(Point3D& point, double _x, double _y, double _z) { //& e nujen kogato pravim promeni 
															 //vurhu promenlivite ot "point".

	point.x += _x;
	point.y += _y;
	point.z += _z;

	//cout << point.x << " " << point.y << " " << point.z << endl;
	point.print();

}

int main() {

	Point3D point(10,15,5);
	

	cout << "Our coordinates are: " << point.x << " " << point.y << " " << point.z << endl;

	cout << "Our new coordinates are: ";
	point.move(10, 15, 5);
	cout << endl;

	Point3D point2(10, 15, 5);

	cout << "Our newly coordinates are: ";
	move(point2, 10, 15, 5);
	cout << endl;
	
	Point3D point3(10,15,5);

	point3.move_X(10);
	cout << "Our most newly coordinates are: ";
	point.print();





	system("pause");
	return 0;
}