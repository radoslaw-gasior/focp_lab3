#include <iostream>
#include <string>
#include <vector>
#include<array>
#include <cstdlib>

using namespace std;


//define struct
struct point2d{
	double x;
	double y;
};

point2d create_point() {
	point2d temp;
	temp.x = rand() % 100;
	temp.y = rand() % 100;
	return temp;
}
//pass by reference &&&&&&&&&&&
void create_in_place(point2d& point) {

	point.x = rand() % 100;
	point.y = rand() % 100;
}


int main() {

	//declare variable with struct
	point2d mypoint=create_point();

	point2d empty_point;

	create_in_place(empty_point);



	cout << "X value  " << empty_point.x << endl;
	cout << "Y value  " << empty_point.y << endl;



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