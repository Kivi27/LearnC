#include <iostream>
using namespace std;

class Point {
public:
	Point(const Point& other) : nCoords(other.nCoords) {
		cout << "����� ������������ ����������� ������� " << this << endl;
		coords = new int[nCoords];
		for (int i = 0; i < nCoords; i++)
			coords[i] = other.coords[i];
	}
	
	
	Point() {cout << "����� ������������ ������� " << this << endl; }
	Point(int size, int* arr) : nCoords(size) {
		cout << "����� ������������ ������� " << this << endl;
		coords = new int[nCoords];
		for (int i = 0; i < nCoords; ++i)
			coords[i] = arr[i];
	}
	~Point() {
		cout << "����� ����������� ������� " << this << endl;
		delete[] coords;
	}
private:
	int* coords;
	int nCoords;
};

Point foo(Point pt) {
	cout << "����� ������� foo" << endl;
	return pt;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int coords[] = { 1,2 }, size = 2;
	Point a(size, coords);
	Point b(a);
}
