#include <iostream>
using namespace std;

int main(){
	int    a  =  5	;
	char   b  = 'A'	;
	char  &c  =  b	;
	int   *x  = &a	;
	char  *y  = &b	;
	int  **z  = &x	;
	cout << "a = " <<  		  a	<< endl;
	cout << "b = " <<  		  b	<< endl;
	cout << "c = " <<  		  c	<< endl;
	cout << "x = " <<  		  x	<< endl;
	cout << "y = " <<  (void*)y	<< endl;
	cout << "z = " <<  		  z	<< endl;	
	cout << "\n";
	
	cout << "a = " <<  		 &a	<< endl;
	cout << "b = " << (void*)&b	<< endl;
	cout << "c = " << (void*)&c	<< endl;
	cout << "x = " <<  		  x	<< endl;
	cout << "y = " <<  (void*)y	<< endl;
	cout << "z = " <<  		  z	<< endl;	
	cout << "\n";

	c = 'F';
	cout << "a = " <<  		  a	<< endl;
	cout << "b = " <<  		  b	<< endl;
	cout << "c = " <<  		  c	<< endl;
	cout << "x = " <<  		  x	<< endl;
	cout << "y = " <<  (void*)y	<< endl;
	cout << "z = " <<  		  z	<< endl;	
	cout << "\n";
	
	*y = 'W';
	cout << "a = " <<  		  a	<< endl;
	cout << "b = " <<  		  b	<< endl;
	cout << "c = " <<  		  c	<< endl;
	cout << "x = " <<  		  x	<< endl;
	cout << "y = " <<  (void*)y	<< endl;
	cout << "z = " <<  		  z	<< endl;	
	cout << "\n";
	
	*x = 6;
	cout << "a = " <<  		  a	<< endl;
	cout << "b = " <<  		  b	<< endl;
	cout << "c = " <<  		  c	<< endl;
	cout << "x = " <<  		  x	<< endl;
	cout << "y = " <<  (void*)y	<< endl;
	cout << "z = " <<  		  z	<< endl;	
	cout << "\n";
	
	**z = 7;
	cout << "a = " <<  		  a	<< endl;
	cout << "b = " <<  		  b	<< endl;
	cout << "c = " <<  		  c	<< endl;
	cout << "x = " <<  		  x	<< endl;
	cout << "y = " <<  (void*)y	<< endl;
	cout << "z = " <<  		  z	<< endl;
	
	return 0;
}
