#include <iostream>
#include <cmath>

using namespace std;

class Point {

	public:
		double x;
		double y;
		double z;
	

		Point (double _x, double _y, double _z) {
			x = _x;
			y = _y;
			z = _z;
		}

		void representPoint() {
			cout << "My coordinates are: " << x << " " << y << " " << z << endl;
		}

		void TranslationPoint(double d) {
			x = x*d;
			y = y*d;
			z = z*d;

			cout << "The coordinates of the translated point are: " << x << " "
				<< y << " " << z << '\n';
		}

		void Distance2Points(Point ndpoint) { //Point stpoint,

			double dis = sqrt(pow((x - ndpoint.x), 2) + pow((y - ndpoint.y), 2) + pow((z - ndpoint.z), 2));

			cout << "The distance between the two points is: " << dis << endl;
		}

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

	void representPoint() {
		cout << "My coordinates are: " << x << " " << y << " " << z << endl;
	}

	void TranslationPoint(double d){
		x = x*d;
		y = y*d;
		z = z*d;

		cout << "The coordinates of the translated point are: " << x << " "
			<< y << " " << z << '\n';
	}

	void Distance2Points(Point3D ndpoint) { //Point3D stpoint,

		double dis = sqrt(pow((x - ndpoint.x), 2) + pow((y - ndpoint.y), 2) + pow((z - ndpoint.z), 2));

		cout << "The distance between the two points is: " << dis << endl;
	}

};

Point3D PointTranslation(Point3D point, double d) {
	point.x = point.x * d;
	point.y = point.y * d;
	point.z = point.z * d;

	return point;
}

void _2PointDistance(Point3D point, Point3D ndpoint) {

	double dis = sqrt(pow((point.x - ndpoint.x), 2) + pow((point.y - ndpoint.y), 2) + pow((point.z - ndpoint.z), 2));

	cout << "The distance between the two points is: " << dis << endl;
}



int main()
{
	//Point3D point(7, 4, 3);
	//Point3D point2(17, 6, 2);
	//// point.x = 5; absoliutno korektno pri struct.
	//point.representPoint();
	//point.TranslationPoint(4);
	//point.Distance2Points(point2);
	//Point3D distance = PointTranslation(point, 4);
	//_2PointDistance(point, point2);

	Point point3(1, 2, 3);
	Point point4(1, 2, 3);
	point3.representPoint();
	point3.TranslationPoint(4);
	point3.Distance2Points(point4);

	system("pause");
	return 0;
}