#include<iostream.h>
#include<conio.h>

class A
{
    protected:
	int a;
	int b;
	int c;
	int d;
	int e;

    public:
	A(int a, int b, int c, int d, int e)
	{
	    this->a = a;
	    this->b = b;
	    this->c = c;
	    this->d = d;
	    this->e = e;
	}

	void add()
	{

	}

	void multi()
	{

	}

	void divied()
	{

	}

	void minus()
	{

	}


	void modules()
	{

	}
};

class B : public A
{
    public:
	B(int a, int b, int c, int d, int e) : A(a, b, c, d, e) {}

	void accessProtected()
	{
	    cout << "a = " << a << endl;
	    cout << "b = " << b << endl;
	    cout << "c = " << c << endl;
	    cout << "d = " << d << endl;
	    cout << "e = " << e << endl;
	}
};

void main()
{
    B obj(1, 2, 3, 4, 5);
    clrscr();

    obj.accessProtected();
    obj.add();
    obj.multi();
    obj.divied();
    obj.minus();
    obj.modules();

    getch();
}
