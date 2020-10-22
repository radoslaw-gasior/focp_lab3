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


int main() {

	//declare variable with struct
	point2d mypoint;

	//initialize its members
	mypoint.x = rand()%100;
	mypoint.y = rand()%100;

	point2d myotherpoint;

	myotherpoint.x = 3.5;
	myotherpoint.y = 4.2;

	cout << "X value  " << mypoint.x << endl;
	cout << "Y value  " << mypoint.y << endl;



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