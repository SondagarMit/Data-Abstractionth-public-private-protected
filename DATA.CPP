#include<iostream.h>
#include<conio.h>

class A {
    private:
	int a;
	int b;

    public:
	A(int a, int b) {
	    this->a = a;
	    this->b = b;
	}

	int add() {
	    return a + b;
	}
};

class B : public A {
    public:
	B(int a, int b) : A(a, b) {}

	int add() {
	    return A::add() + 10;
	}
};

void main()
{
    B obj(10, 20);
    clrscr();

    cout << obj.add() << endl;

    getch();
}
