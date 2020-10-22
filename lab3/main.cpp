#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <cstdlib>
#include <cmath>

using namespace std;


//define struct
struct point2d{
	double x;
	double y;
};

point2d create_point() {
	point2d temp;
	temp.x = rand() % 10;
	temp.y = rand() % 10;
	return temp;
}
//pass by reference &&&&&&&&&&&
void create_in_place(point2d& point) {

	point.x = rand() % 100;
	point.y = rand() % 100;
}

float distance(point2d left, point2d right) {

	return sqrt(pow((right.x - left.x), 2) + pow((right.y - left.y), 2));
}

int main() {

	array<point2d, 10> points;

	for (int i = 0; i < 10; i++) {
		points[i] = create_point();
		cout << "point[" << i << "] = (" << points[i].x << ", " << points[i].y << ")" << endl;
	}

	float largest_distance = 0.0;
	point2d first, second;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			float dist = distance(points[i], points[j]);

			if (dist >= largest_distance) {
				largest_distance = dist;
				first = points[i];
				second = points[j];
			}

			cout << dist << endl;
		}
	}

	cout << "largest distance is:" << largest_distance << endl;
	cout << "first point: " << first.x << "," << first.y << endl;
	cout << "second point: " << second.x << "," << second.y << endl;

	/*
	//declare variable with struct
	point2d mypoint=create_point();

	point2d empty_point;

	create_in_place(empty_point);

	cout << "X value  " << empty_point.x << endl;
	cout << "Y value  " << empty_point.y << endl;
	*/


	/*
	array<int, 8> numbers = { 6,5,3,1,8,7,2,4 };

	for (int j = 8; j > 0; j--) {
		for (int i = 0; i < 8; i++) {
			if (numbers[i] > numbers[i + 1]) {
				int temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = left;
			}
		}
	}

	for (int i = 0; i < 8; i++) {
		cout << numbers[i] << endl;
	}
	*/
	return 0;
}