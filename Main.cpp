
class MyClass {
	MyClass(int X){}
	};


#include <iostream>
int q = 5; //lvalue q/rvalue 5
int& bar() {
	return q;//результат работы - адрес перменной rvalue
}//возвращает тип ссылка на int(ссылка на тип возвращаемого значения - int&)

int main() {

	int x;
	x = 5;//x - lvalue; 5 - rvalue;
	
	//*(p + 1) = 6;//*(p + 1) - lvalue;6 - rvalue;
	//явное преобразование rvalue (p + 1) в  lvalue с помощью *
	int p1 = 3;
	int* pp = &p1;
	&p1 = 2;//ошибка так как &p - rvalue x - lvalue, необходимо поменять местами

	MyClass(50) = 4;//оба опренда в данном выражении являются rvalue 
	//в обоих случаях с типом данных инт

	bar() = 3;//bar() - lvalue; 5 - rvalue;
	return 0;
}