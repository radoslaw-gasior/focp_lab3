#include <iostream>
#include <string>
#include <vector>
#include<array>

using namespace std;


//define struct
struct point2d{
	double x;
	double y;
};


int main() {

	//declare variable with struct
	point2d mypoint;

	//initialize its members
	mypoint.x = 3.3;
	mypoint.y = 5.5;

	point2d myotherpoint;

	myotherpoint.x = 3.5;
	myotherpoint.y = 4.2;

	cout << "X value" << mypoint.x << endl;
	cout << "Y value" << mypoint.y << endl;



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