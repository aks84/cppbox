#include <iostream>

using namespace std;

int main(){
	int a = 10;
  	int *p;
  	cout << "p = " << p << endl;
  	cout << "after" << endl;
  	p = &a;
  	cout << "p = " << p << endl;
  	cout << "*p = " << *p << endl;
  	cout << "&p = " << &p << endl;
  	cout << "*&p = " << *&p << endl;
	return 0;
}