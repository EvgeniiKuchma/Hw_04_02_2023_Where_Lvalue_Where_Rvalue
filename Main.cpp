
class MyClass {
	MyClass(int X){}
	};


#include <iostream>
int q = 5; //lvalue q/rvalue 5
int& bar() {
	return q;//��������� ������ - ����� ��������� rvalue
}//���������� ��� ������ �� int(������ �� ��� ������������� �������� - int&)

int main() {

	int x;
	x = 5;//x - lvalue; 5 - rvalue;
	
	//*(p + 1) = 6;//*(p + 1) - lvalue;6 - rvalue;
	//����� �������������� rvalue (p + 1) �  lvalue � ������� *
	int p1 = 3;
	int* pp = &p1;
	&p1 = 2;//������ ��� ��� &p - rvalue x - lvalue, ���������� �������� �������

	MyClass(50) = 4;//��� ������� � ������ ��������� �������� rvalue 
	//� ����� ������� � ����� ������ ���

	bar() = 3;//bar() - lvalue; 5 - rvalue;
	return 0;
}