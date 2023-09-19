#include<iostream.h>
#include<conio.h>

class Class
{
      private:
	       int privateme;

      protected:
	       int protectedme;

      public:
	      Class(int privateme, int protectedme)
	    {
	      this->privateme = privateme;
	      this->protectedme = protectedme;
            }

	     void printPrivateme()
	    {
	      cout << "privateMember = " << privateme << endl;
	    }

	     void printProtectedme()
	    {
	      cout << "protectedMember = " << protectedme << endl;
	    }
};

void main()
{
  Class obj(10, 20);

  clrscr();

  obj.printProtectedme();
  obj.printPrivateme();

  getch();
}
