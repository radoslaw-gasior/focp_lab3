#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <cstdlib>
#include <cmath>

using namespace std;

/*
//define struct
struct point2d{
	double x;
	double y;

	void print() {
		cout << "(" << this->x << "," << this->y << ")" << endl;
	}
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


float areaof_triangle(point2d a, point2d b, point2d c) {
	float product=a.x * (b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y);
	return abs(product / 2);
}
*/

struct Matrix2d {
	vector<vector<int>> contents;

	void add(Matrix2d other) {
		if (other.rows() == rows() && other.columns()==columns()) {
			
			for (int i = 0; i < rows(); i++) {
				for (int j = 0; j < columns(); j++) {
					contents[i][j] += other.contents[i][j];
				}
			}

		}
		else {
			cout << "dimensions must match" << endl;
		}
	}
	
	
	int rows() {
		return contents.size();
	}
	int columns() {
		return contents[0].size();
	}


	void input_matrix() {
		int columns, rows;
		cout << "how many rows?" << endl;
		cin >> rows;
		cout << "number of columns?" << endl;
		cin >> columns;
		
		for (int i = 0; i < rows; i++) {
			vector<int>row;
			int temp;

			for (int j = 0; j < columns; j++) {
				cout << "introduce value" << endl;
				cin >> temp;
				row.push_back(temp);
			}
			contents.push_back(row);
		}
	}

	void print() {

		cout << "contents of the matrix:" << endl;

		int rows = contents.size();
		int columns = contents[0].size();
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j <columns ; j++) {
				cout << contents[i][j] << " ";
			}
			cout << endl;
		}
	}
};


int main() {

	
	Matrix2d a,b;

	a.input_matrix();
	b.input_matrix();

	a.print();
	b.print();

	a.add(b);
	a.print();
	
	/*
	array<point2d, 10> points;

	for (int i = 0; i < 10; i++) {
		points[i] = create_point();
		cout << "point[" << i << "] = (" << points[i].x << ", " << points[i].y << ")" << endl;
	}

	float largest_distance = 0.0;
	point2d first, second, third;
	*/

	/*
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
	*/
	/*
	float largest_area = 0.0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				float area = areaof_triangle(points[i], points[j], points[k]);
				if (area > largest_area) {
					largest_area = area;
					first = points[i];
					second = points[j];
					third = points[k];
				}
			}
		}
	}
	*/

	/*
	cout << "largest area is:" << largest_area << endl;
	cout << "first point: ";
	first.print();
	cout << "second point: ";
	second.print();
	cout << "third point: ";
	third.print();
	*/

	//cout << "largest distance is:" << largest_distance << endl;
	//cout << "first point: " << first.x << "," << first.y << endl;
	//cout << "second point: " << second.x << "," << second.y << endl;

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