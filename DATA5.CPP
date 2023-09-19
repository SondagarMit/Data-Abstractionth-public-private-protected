#include<iostream.h>
#include<conio.h>
class Base 
{
	private:
		  int x;
	protected:
		  int y;


	public:
		Base() { x = 0; y = 0; }
		void setX(int value) { x = value; }
		void setY(int value) { y = value; }
};

class Derived : public Base
{
	public:
	    void printXY()
	    {
	     int x;
	     int y;
	     cout << x << " " << y << endl;
	    }

};

void main()
{
  Derived obj;

  clrscr();
  obj.setX(10);
  obj.setY(20);

  obj.y();

  obj.printXY();

  getch();;
}
