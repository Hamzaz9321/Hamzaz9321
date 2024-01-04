#include<iostream>
using namespace std;
#include<string.h>

/*
class base
{
public:
	base() { cout << "this is base class constructor" << endl; }
	void display() { cout << "base class display" << endl; }
	~base() {}

};

class derivedone :public base
{
public:
	derivedone() { cout << "this is derived one class constructor" << endl; }
	~derivedone() {}

};

class derivedtwo :public base
{
public:
	derivedtwo() { cout << "this is derived two class constructor" << endl; }
	~derivedtwo() {}

};

class primary :public derivedone, public derivedtwo
{
public:
	primary() { cout << "this is primary class constructor" << endl; }
	void display(){cout<<"primary class display"<<endl;} // as long as i have this fucntion that is overridden in my sub-derived class ( last class in the hierarchy), there is no issue as there is no path need to be selected )
	~primary() {}                                        // run the program again after commenting this fucntion from primary class, compiler will throw error for ambigious path

};

int main()
{
	primary p;
	p.display();
}

*/


/*
--------------------------------------------------------------------------------------------------------------------------------------------------------
in order to not have the above mentioned issue i will use virtual inheritence with the classes that are derived from same common class*/



/*

class base
{
  public:
  base(){cout<<"this is base class constructor"<<endl;}
  void display(){cout<<"base class display"<<endl;}
  ~base(){}

};

class derivedone:virtual public base
{
  public:
  derivedone(){cout<<"this is derived one class constructor"<<endl;}
  ~derivedone(){}

};

class derivedtwo: virtual public base
{
  public:
  derivedtwo(){cout<<"this is derived two class constructor"<<endl;}
  ~derivedtwo(){}

};

class primary:public derivedone, public derivedtwo
{
  public:
  primary(){cout<<"this is primary class constructor"<<endl;}
 // void display(){cout<<"primary class display"<<endl;} // as long as i have this fucntion that is overridden in my sub-derived class ( last class in the hierarchy), there is no issue as there is no path need to be selected )
  ~primary(){}                                        // run the program again after commenting this fucntion from primary class, compiler will throw error for ambigious path

};

int main()
{
   primary p;
   p.display();
}
*/

//------------------------------------------------------------------------------------

//in this case i have displayed two display fucntion in derivedone and derivedtwo class as well, however if you run this the error still resist because two classes has a link to primary class and again the primary class is confused which one to execute 


class base
{
  public:
  base(){cout<<"this is base class constructor"<<endl;}
  void display(){cout<<"base class display"<<endl;}
  ~base(){}

};

class derivedone:virtual public base
{
  public:
  derivedone(){cout<<"this is derived one class constructor"<<endl;}
  void display() { cout<<"derivedone display"<<endl;}
  ~derivedone(){}

};

class derivedtwo: virtual public base
{
  public:
  derivedtwo(){cout<<"this is derived two class constructor"<<endl;}
  void display() { cout<<"derivedtwo display"<<endl;}
  ~derivedtwo(){}

};

class primary:public derivedone, public derivedtwo
{
  public:
  primary(){cout<<"this is primary class constructor"<<endl;}
 void display(){cout<<"primary class display"<<endl;} // as long as i have this fucntion that is overridden in my sub-derived class ( last class in the hierarchy), there is no issue as there is no path need to be selected )
  ~primary(){}                                        // run the program again after commenting this fucntion from primary class, compiler will throw error for ambigious path

};

int main()
{
   primary p;
   p.display(); // if i run this the error resists ( this is not due to dimaond problem this is due to having inherit two classes with same fucntions and compiler cant decide)
  p.derivedtwo::display();  // in order to select specefic display fucntion run like this
}

