#include<iostream.h>
#include<conio.h>
class X
{
      protected:
	    int x;

      public:
	    X(int x)
	    {
	       this->x = x;
	    }

	    void printX()
	    {
	     cout << "x = " << x << endl;
	    }
};

class Y : public X
{
public:
	Y(int x) : X(x) {}

	void addOne()
      {
	    x++;
      }
};

void main() 
{
  Y obj(10);

  clrscr();

  obj.printX();

  obj.addOne();

  obj.printX();

  getch();
}
