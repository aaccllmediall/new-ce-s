#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string conver(int n)
{
	stringstream stream;
	stream << n;
	return stream.str();	
}

class Vehicle 
{
	protected :
		string license ;
		int year ;
	public :
		Vehicle ( const string & myLicense , const int myYear ) : license ( myLicense ), year ( myYear ) {}
		const string getDesc () const { return license + " from " + conver(year) ;}
		const string & getLicense () const { return license ;}
		const int getYear () const { return year ;}
};

int main()
{
	Vehicle a("600XI90", 2001);
	cout << a.getDesc() << endl;
	return 0;
}
