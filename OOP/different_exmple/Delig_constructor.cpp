#include <iostream>

using namespace std;

class Human {
public:
	Human() {
		name = " ";
	}
	Human(string name) {
		this->name = name;
	}
	Human(string name, int age) : Human(name) {
		this->age = age;
	} // ����������� �����������
	Human(string name, int age, float weight) : Human(name,age) {
		this->weight - weight;
	}
public:
	string name;
	int age;
	float weight;
};


class Point {
	public:
		Point() {
			cout << "����� ������������ ������� " << this << endl;
		}
		Point(int px, int py) : x(px), y(py) {
			cout << "����� ������������ ������� � 2-�� ����������� " << this << endl;
		}
		~Point() {
			cout << "����� ����������� ������� " << this << endl;
		}
	private:
		int x,y;
	public:
		void SetCoord(int x, int y) {this->x = x; this->y = y;}
};

int main()
{
	setlocale(LC_ALL, "rus");
	//Human h("Alex", 20,80);
	Point pt(2,3);
}
